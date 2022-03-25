// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LarkXRDataChannel.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LarkXRCloudAppCompnent.generated.h"

UENUM(BlueprintType)
enum class LarkDataChannelType : uint8 {
	DATA_STRING = 0,
	DATA_BIN = 1,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTaskStatus, bool, status, FString, taskId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDataChannelOnData, LarkDataChannelType, type, FString, dataText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAiVoiceResult, bool, isUrl, FString, ngl, FString, url);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LARKXRCLOUDAPP_API ULarkXRCloudAppCompnent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULarkXRCloudAppCompnent();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, BlueprintAssignable, Category = "Events|LarkXR")
		FDataChannelOnData p_FDataChannelOnData;	
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, BlueprintAssignable, Category = "Events|LarkXR")
		FOnTaskStatus p_FOnTaskStatus;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, BlueprintAssignable, Category = "Events|LarkXR")
		FOnAiVoiceResult p_FOnAiVoiceResult;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// 获取当前的 TaskID
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "LarkXR")
		FString TaskID;

	// 是否在游戏线程回调
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "LarkXR")
		bool bCallbackOnGameThread = true;

	//************************************
	// Method:    lr_client_register_getTaskId_callback
	// FullName:  lr_client_register_getTaskId_callback
	// Access:    public 
	// Returns:   LARKXR_API void DC_CALL
	// Qualifier: 应用通过此回调接口获取客户单连接状态以及taskid
	// Parameter: on_taskid get_task
	// Parameter: void * user_data
	//************************************
	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		void LR_Client_Register_Taskstatus_Callback();

	/*
		datachannel接口都是异步的

		lr_client_start 返回成功只是说明接口创建成功

		是否连接成功需要看接口调用的回调函数，如果失败了 请查看on_disconnected的参数

	*/
	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		int LR_Client_Start(FString debugID = "");

	/*
		lr_client_send 发送字符串 时请 请保证 字符串是utf8编码,长度算上\0
		发送成功 返回值为发送的长度
		失败 请查看返回值
	*/
	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		static int LR_Client_SendText(FString data);

	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		static int LR_Client_SendBinary(TArray<uint8> data);

	/*
	* stop
	*/
	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		static void LR_Client_Stop();

	/**
	* 启动智能语音并自动注册回调
	* 返回 R_SUCCESS:注册成功	 XR_ERROR_INTERFACE_FAILED:没有调用 r_client_start XR_ERROR_SERVER_UNSUPPORT:数据通道不支持/智能语音不支持
	* 调用此函数一定要再lr_client_start成功，并且回调函数也返回成功后再调用
	* 当前服务器应配置好智能语音服务，并切在后台上传应用时开始智能语音功能
	*/
	UFUNCTION(BlueprintCallable, Category = "LarkXR")
		int LR_Client_AiVoice_Start();

private:
	static void cc_on_connected(void* user_data);

	static void cc_on_data(data_type type, const char* data, int size, void* user_data);

	static void cc_on_disconnected(enum ErrorCode code, void* user_data);

	static void cc_on_taskstatus(bool status/*true:客户端连接 false:客户端断开*/, const char* taskId, void* user_data);

	static void cc_on_aivoice_callback(struct AiVoicePacket* packet, void* user_data);
};
