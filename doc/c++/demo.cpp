#include <windows.h>
#include "stdio.h"
#include "LarkXRDataChannel.h"
#include "LarkXRAiVoice.h"
#pragma comment(lib,"LarkXRDataChannel64.lib")

static void cc_on_connected(void* user_data)
{
	printf("data channel connected!\n");
}

static void cc_on_data(data_type type, const char* data, int size,void* user_data)
{
	if (type == DATA_STRING)
	{
		printf("recv data string:%s size:%d\n", data, size);
	}
	else {
		printf("recv data binary: size :%d\n", size);
	}
}

static void cc_on_error(enum ErrorCode code,void* user_data)
{
	printf("data channel disconnected!\n");

}
static void cc_aivoice_callback(struct AiVoicePacket* packet, void* user_data)
{
	if(packet->url)
	{
	printf("nlg:%s mp3 url:%s\n", packet->nlg, packet->online_url);
	/*
	目前平行云对接的语音平台只有在线mp3
	*/
	}

}
int  main()
{

	/*
		datachannel接口都是异步的

		lr_client_start 返回成功只是说明接口创建成功

		是否连接成功需要看接口调用的回调函数，如果失败了 请查看on_disconnected的参数

		3.2版本的调用启动接口需要注意，如果应用无法在命令行参数获取taskid,请传NULL（#预启动模式下）


	*/
	if (XR_SUCCESS != lr_client_start("123456",cc_on_connected, cc_on_data, cc_on_error))
	{
		return -1;
	}
	/*

		lr_client_send 发送字符串 时请 请保证 字符串是utf8编码,长度算上\0
		发送成功 返回值为发送的长度
		失败 请查看返回值
	*/
	for (int i = 0; i < 1000; i++)
	{
		char buf[100];
		sprintf_s(buf, "idx:%d HelloXR", i);
		auto r = lr_client_send(DATA_STRING, buf, strlen(buf) + 1);

		char bin[] = { 0x01,0x02,0x03 };
		r = lr_client_send(DATA_BIN, bin, 3);


	}
	/*
		3.2.3.1版本增加了智能AI语音交互服务
		lr_client_register_aivoice_callback 注册一个回调函数即可使用
		如果当前授权服务不支持智能语音交互 会在cc_on_error中通知
		lr_client_register_aivoice_callback 必须依赖数据通道服务，也就是说必须调用lr_client_start是前提
		
	*/
	lr_client_register_aivoice_callback(cc_aivoice_callback,NULL)
	Sleep(5000);

	/*

		结束调用lr_client_stop
	*/
	lr_client_stop();


	return 0;

}
