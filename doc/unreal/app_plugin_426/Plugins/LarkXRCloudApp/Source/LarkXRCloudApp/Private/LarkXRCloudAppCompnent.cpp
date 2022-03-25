// Fill out your copyright notice in the Description page of Project Settings.


#include "LarkXRCloudAppCompnent.h"
#include "LarkXRAiVoice.h"
#include <string>

// Sets default values for this component's properties
ULarkXRCloudAppCompnent::ULarkXRCloudAppCompnent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Last Command Id;
	//TArray<FString> list;
	//FString command = ::FCommandLine::Get();
	//UE_LOG(LogTemp, Warning, TEXT("LarkXR command id"));
	//command.ParseIntoArray(list, TEXT(" "), true);
	//UE_LOG(LogTemp, Warning, TEXT("LarkXR command id"), *command);

	//if (list.Num() > 0) {
	//	Command_TaskID = list.Last();
	//}
}


// Called when the game starts
void ULarkXRCloudAppCompnent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULarkXRCloudAppCompnent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void ULarkXRCloudAppCompnent::LR_Client_Register_Taskstatus_Callback() 
{
	lr_client_register_taskstatus_callback(cc_on_taskstatus, this);
}

int ULarkXRCloudAppCompnent::LR_Client_Start(FString debugID)
{
	return lr_client_start(TCHAR_TO_ANSI(*debugID), cc_on_connected, cc_on_data, cc_on_disconnected, this);
}

int ULarkXRCloudAppCompnent::LR_Client_SendText(FString data)
{
	std::string utf8str(TCHAR_TO_UTF8(*data));
	return lr_client_send(DATA_STRING, utf8str.c_str(), utf8str.size());
}

int ULarkXRCloudAppCompnent::LR_Client_SendBinary(TArray<uint8> data)
{
	return 0;
}

void ULarkXRCloudAppCompnent::LR_Client_Stop()
{
	lr_client_stop();
}


int ULarkXRCloudAppCompnent::LR_Client_AiVoice_Start()
{
	return lr_client_register_aivoice_callback(cc_on_aivoice_callback, this);
}

void ULarkXRCloudAppCompnent::cc_on_connected(void* user_data)
{
	UE_LOG(LogTemp, Verbose, TEXT("data channel connected"));
}

void ULarkXRCloudAppCompnent::cc_on_data(data_type type, const char* data, int size, void* user_data)
{
	if (type == DATA_STRING) {
		FString str = UTF8_TO_TCHAR(data);

		if (((ULarkXRCloudAppCompnent*)user_data)->bCallbackOnGameThread) {
			AsyncTask(ENamedThreads::GameThread, [=]() {
				// code to execute on game thread here
				((ULarkXRCloudAppCompnent*)user_data)->p_FDataChannelOnData.Broadcast(LarkDataChannelType::DATA_STRING, str);
				UE_LOG(LogTemp, Verbose, TEXT("Callback on game thread. Got txt msg %s %d"), *str, size);
			});
		}
		else {
			((ULarkXRCloudAppCompnent*)user_data)->p_FDataChannelOnData.Broadcast(LarkDataChannelType::DATA_STRING, str);
			UE_LOG(LogTemp, Verbose, TEXT("Got txt msg %s %d"), *str, size);
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Got binary msg size "), size);
	}
}

void ULarkXRCloudAppCompnent::cc_on_taskstatus(bool status, const char* taskId, void* user_data)
{
	((ULarkXRCloudAppCompnent*)user_data)->TaskID = UTF8_TO_TCHAR(taskId);
	((ULarkXRCloudAppCompnent*)user_data)->p_FOnTaskStatus.Broadcast(status, UTF8_TO_TCHAR(taskId));
}

void ULarkXRCloudAppCompnent::cc_on_disconnected(ErrorCode code, void* user_data)
{
	UE_LOG(LogTemp, Warning, TEXT("data channel disconnected "), code);
}

void ULarkXRCloudAppCompnent::cc_on_aivoice_callback(struct AiVoicePacket* packet, void* user_data) {

	FString ngl = UTF8_TO_TCHAR(packet->nlg);
	FString url = "";
	
	if (packet->url && packet->online_url != NULL) {
		url = UTF8_TO_TCHAR(packet->online_url);
	}

	UE_LOG(LogTemp, Verbose, TEXT("on ai voice callback %s"), *ngl);

	ULarkXRCloudAppCompnent* component = (ULarkXRCloudAppCompnent*)user_data;

	if (component->bCallbackOnGameThread) {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			// code to execute on game thread here
			component->p_FOnAiVoiceResult.Broadcast(packet->url, ngl, url);
		});
	}
	else {
		component->p_FOnAiVoiceResult.Broadcast(packet->url, ngl, url);
	}
}