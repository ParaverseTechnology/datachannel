# LarkXR DataChannel SDK 3.2.39.0

---

[English](./README.md) [中文](./README.zh_CN.md)

---

## LarkXR DataChannel SDK

* Cloud app use SDK to communicat with webclient. Send and recevive binary or string message.

* SDK support Lark Server verison >= 3.2.5.0

## Type define

* XR_SUCCESS                 success
* XR_ERROR_INTERFACE_FAILED  cant bind socket port
* XR_ERROR_SERVER_UNSUPPORT  render server dont support datachannel
* XR_ERROR_PARAM             param illegal
* XR_ERROR_OPREATION         operate error

## Functions

### lr_client_register_taskstatus_callback

```c
LARKXR_API void DC_CALL lr_client_register_taskstatus_callback(on_taskstatus taskstatus,void* user_data = NULL);
```

* Des

Regist callback to get client connect state and taskid.

* Param

1. on_taskstatus: callback when state change.

2. user_data: user data pass to the callback.

### lr_client_start

```c
LARKXR_API int  DC_CALL lr_client_start(const char* taskid, on_connected cb_connected,on_data cb_data,on_disconnected cb_disconnected,void* user_data);
```

* Des

Start connect create resource and set callback.

* Param

1. taskid: option for old version. canbe null ptr.
2. on_connected: callback when connected, must not be null.
3. on_data: callbcak when recive data from client, must not be null.L
4. on_error: callback when something wrong, must not be null.
5. user_data: user data pass to the callback.

Return XR_SUCCESS or XR_ERROR_XXX

### lr_client_send

```c
LARKXR_API int DC_CALL lr_client_send(enum data_type type, const char* data, size_t size);
```

* Des

Send string or binary data to client.

* Param

1. type: data type, string or binary
2. data: data ptr
3. size: data size (string contain '\0' C type length)

* Return 0 success or < 0 failed.

### lr_client_stop

```c
LARKXR_API void DC_CALL lr_client_stop();
```

* Des: stop datachannel.

### lr_client_register_aivoice_callback

* Des:

Regis Aivoice callback.

* Param

1. on_aivoice_callback: callback when got Aivoice data.

```c
struct AiVoicePacket {
    bool url;                //true :online audio url(mp3) .false: audio pack (pcm)
    unsigned int voice_id;   //voice ID
    const char* online_url;  //if url = true url here or null
    int url_size;            //url size contain end \0
    const char* nlg;         // aivoice conversation text.
    int nlg_size;            // conversation text size, contain end \0
    // if url=false, pcm package data here
    unsigned int slice_id;   // voice slice ID
    int samples_per_sec;     //eg.16000
    int channels;            //eg.1
    const char* audio;       //data ptr,if url = true null
    int size_byte;           //data byte size
    bool last_packet;        //is last package
};
```

## Demo

### [C++Demo](./doc/c%2B%2B/)

### [UnityDemo](./doc/unity/)

* [UnityDemo Doc](./doc/unity/README.md)
* [Unity Plugin](./doc/unity/lark_datachannel_unity3d_export_unity2019.unitypackage)

### [UE4Demo](./doc/unreal/)

* [UE4.26](./doc/unreal/app_plugin_426/)
* [UE4.27](./doc/unreal/app_plugin_427/)
* [UE4.27](./doc/unreal/app_plugin_501/)
* [UE4.27](./doc/unreal/app_plugin_510/)
* [UE4.27](./doc/unreal/app_plugin_520/)
* [UEDeoc](./doc/unreal/ue4_datachannel_blueprint.md)

### [WebClient](./doc/unity/webclient/)