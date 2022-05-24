// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LarkXRCloudApp/Public/LarkXRCloudAppCompnent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLarkXRCloudAppCompnent() {}
// Cross Module References
	LARKXRCLOUDAPP_API UEnum* Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType();
	UPackage* Z_Construct_UPackage__Script_LarkXRCloudApp();
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature();
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature();
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature();
	LARKXRCLOUDAPP_API UClass* Z_Construct_UClass_ULarkXRCloudAppCompnent_NoRegister();
	LARKXRCLOUDAPP_API UClass* Z_Construct_UClass_ULarkXRCloudAppCompnent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_LarkDataChannelType;
	static UEnum* LarkDataChannelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_LarkDataChannelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_LarkDataChannelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType, Z_Construct_UPackage__Script_LarkXRCloudApp(), TEXT("LarkDataChannelType"));
		}
		return Z_Registration_Info_UEnum_LarkDataChannelType.OuterSingleton;
	}
	template<> LARKXRCLOUDAPP_API UEnum* StaticEnum<LarkDataChannelType>()
	{
		return LarkDataChannelType_StaticEnum();
	}
	struct Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enumerators[] = {
		{ "LarkDataChannelType::DATA_STRING", (int64)LarkDataChannelType::DATA_STRING },
		{ "LarkDataChannelType::DATA_BIN", (int64)LarkDataChannelType::DATA_BIN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DATA_BIN.Name", "LarkDataChannelType::DATA_BIN" },
		{ "DATA_STRING.Name", "LarkDataChannelType::DATA_STRING" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LarkXRCloudApp,
		nullptr,
		"LarkDataChannelType",
		"LarkDataChannelType",
		Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType()
	{
		if (!Z_Registration_Info_UEnum_LarkDataChannelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_LarkDataChannelType.InnerSingleton, Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_LarkDataChannelType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics
	{
		struct _Script_LarkXRCloudApp_eventOnTaskStatus_Parms
		{
			bool status;
			FString taskId;
		};
		static void NewProp_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_taskId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_status_SetBit(void* Obj)
	{
		((_Script_LarkXRCloudApp_eventOnTaskStatus_Parms*)Obj)->status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_LarkXRCloudApp_eventOnTaskStatus_Parms), &Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LarkXRCloudApp_eventOnTaskStatus_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::NewProp_taskId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LarkXRCloudApp, nullptr, "OnTaskStatus__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::_Script_LarkXRCloudApp_eventOnTaskStatus_Parms), Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics
	{
		struct _Script_LarkXRCloudApp_eventDataChannelOnData_Parms
		{
			LarkDataChannelType type;
			FString dataText;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LarkXRCloudApp_eventDataChannelOnData_Parms, type), Z_Construct_UEnum_LarkXRCloudApp_LarkDataChannelType, METADATA_PARAMS(nullptr, 0) }; // 1266445297
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_dataText = { "dataText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LarkXRCloudApp_eventDataChannelOnData_Parms, dataText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::NewProp_dataText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LarkXRCloudApp, nullptr, "DataChannelOnData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::_Script_LarkXRCloudApp_eventDataChannelOnData_Parms), Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics
	{
		struct _Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms
		{
			bool isUrl;
			FString ngl;
			FString url;
		};
		static void NewProp_isUrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ngl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_isUrl_SetBit(void* Obj)
	{
		((_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms*)Obj)->isUrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_isUrl = { "isUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms), &Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_isUrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_ngl = { "ngl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms, ngl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_isUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_ngl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LarkXRCloudApp, nullptr, "OnAiVoiceResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms), Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_AiVoice_Start)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LR_Client_AiVoice_Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_Stop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULarkXRCloudAppCompnent::LR_Client_Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_SendBinary)
	{
		P_GET_TARRAY(uint8,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULarkXRCloudAppCompnent::LR_Client_SendBinary(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_SendText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULarkXRCloudAppCompnent::LR_Client_SendText(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_Start)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_debugID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LR_Client_Start(Z_Param_debugID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULarkXRCloudAppCompnent::execLR_Client_Register_Taskstatus_Callback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LR_Client_Register_Taskstatus_Callback();
		P_NATIVE_END;
	}
	void ULarkXRCloudAppCompnent::StaticRegisterNativesULarkXRCloudAppCompnent()
	{
		UClass* Class = ULarkXRCloudAppCompnent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LR_Client_AiVoice_Start", &ULarkXRCloudAppCompnent::execLR_Client_AiVoice_Start },
			{ "LR_Client_Register_Taskstatus_Callback", &ULarkXRCloudAppCompnent::execLR_Client_Register_Taskstatus_Callback },
			{ "LR_Client_SendBinary", &ULarkXRCloudAppCompnent::execLR_Client_SendBinary },
			{ "LR_Client_SendText", &ULarkXRCloudAppCompnent::execLR_Client_SendText },
			{ "LR_Client_Start", &ULarkXRCloudAppCompnent::execLR_Client_Start },
			{ "LR_Client_Stop", &ULarkXRCloudAppCompnent::execLR_Client_Stop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics
	{
		struct LarkXRCloudAppCompnent_eventLR_Client_AiVoice_Start_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_AiVoice_Start_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "/**\n\x09* ???????????????\xd4\xb6?\xd7\xa2???\xd8\xb5?\n\x09* ???? R_SUCCESS:\xd7\xa2???\xc9\xb9?\x09 XR_ERROR_INTERFACE_FAILED:\xc3\xbb?\xd0\xb5??? r_client_start XR_ERROR_SERVER_UNSUPPORT:????\xcd\xa8????\xd6\xa7??/??????????\xd6\xa7??\n\x09* ???\xc3\xb4\xcb\xba???\xd2\xbb??\xd2\xaa??lr_client_start?\xc9\xb9??????\xd2\xbb\xd8\xb5?????\xd2\xb2???\xd8\xb3\xc9\xb9????\xd9\xb5???\n\x09* ??\xc7\xb0??????\xd3\xa6???\xc3\xba????????????\xf1\xa3\xac\xb2????\xda\xba?\xcc\xa8?\xcf\xb4?\xd3\xa6??\xca\xb1??\xca\xbc????????????\n\x09*/" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "???????????????\xd4\xb6?\xd7\xa2???\xd8\xb5?\n???? R_SUCCESS:\xd7\xa2???\xc9\xb9?  XR_ERROR_INTERFACE_FAILED:\xc3\xbb?\xd0\xb5??? r_client_start XR_ERROR_SERVER_UNSUPPORT:????\xcd\xa8????\xd6\xa7??/??????????\xd6\xa7??\n???\xc3\xb4\xcb\xba???\xd2\xbb??\xd2\xaa??lr_client_start?\xc9\xb9??????\xd2\xbb\xd8\xb5?????\xd2\xb2???\xd8\xb3\xc9\xb9????\xd9\xb5???\n??\xc7\xb0??????\xd3\xa6???\xc3\xba????????????\xf1\xa3\xac\xb2????\xda\xba?\xcc\xa8?\xcf\xb4?\xd3\xa6??\xca\xb1??\xca\xbc????????????" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_AiVoice_Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::LarkXRCloudAppCompnent_eventLR_Client_AiVoice_Start_Parms), Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "//************************************\n// Method:    lr_client_register_getTaskId_callback\n// FullName:  lr_client_register_getTaskId_callback\n// Access:    public \n// Returns:   LARKXR_API void DC_CALL\n// Qualifier: \xd3\xa6??\xcd\xa8???\xcb\xbb\xd8\xb5??\xd3\xbf\xda\xbb?\xc8\xa1?\xcd\xbb???????\xd7\xb4\xcc\xac?\xd4\xbc?taskid\n// Parameter: on_taskid get_task\n// Parameter: void * user_data\n//************************************\n" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "Method:    lr_client_register_getTaskId_callback\nFullName:  lr_client_register_getTaskId_callback\nAccess:    public\nReturns:   LARKXR_API void DC_CALL\nQualifier: \xd3\xa6??\xcd\xa8???\xcb\xbb\xd8\xb5??\xd3\xbf\xda\xbb?\xc8\xa1?\xcd\xbb???????\xd7\xb4\xcc\xac?\xd4\xbc?taskid\nParameter: on_taskid get_task\nParameter: void * user_data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_Register_Taskstatus_Callback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics
	{
		struct LarkXRCloudAppCompnent_eventLR_Client_SendBinary_Parms
		{
			TArray<uint8> data;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_SendBinary_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_SendBinary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_SendBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::LarkXRCloudAppCompnent_eventLR_Client_SendBinary_Parms), Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics
	{
		struct LarkXRCloudAppCompnent_eventLR_Client_SendText_Parms
		{
			FString data;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_SendText_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_SendText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "/*\n\x09\x09lr_client_send ?????\xd6\xb7??? \xca\xb1?? ?\xeb\xb1\xa3\xd6\xa4 ?\xd6\xb7?????utf8????,????????\\0\n\x09\x09???\xcd\xb3\xc9\xb9? ????\xd6\xb5\xce\xaa???\xcd\xb5\xc4\xb3???\n\x09\x09\xca\xa7?? ???\xe9\xbf\xb4????\xd6\xb5\n\x09*/" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "lr_client_send ?????\xd6\xb7??? \xca\xb1?? ?\xeb\xb1\xa3\xd6\xa4 ?\xd6\xb7?????utf8????,????????\\0\n???\xcd\xb3\xc9\xb9? ????\xd6\xb5\xce\xaa???\xcd\xb5\xc4\xb3???\n\xca\xa7?? ???\xe9\xbf\xb4????\xd6\xb5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_SendText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::LarkXRCloudAppCompnent_eventLR_Client_SendText_Parms), Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics
	{
		struct LarkXRCloudAppCompnent_eventLR_Client_Start_Parms
		{
			FString debugID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_debugID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::NewProp_debugID = { "debugID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_Start_Parms, debugID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LarkXRCloudAppCompnent_eventLR_Client_Start_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::NewProp_debugID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "/*\n\x09\x09""datachannel?\xd3\xbf\xda\xb6????\xec\xb2\xbd??\n\n\x09\x09lr_client_start ???\xd8\xb3\xc9\xb9?\xd6\xbb??\xcb\xb5???\xd3\xbf\xda\xb4????\xc9\xb9?\n\n\x09\x09?\xc7\xb7????\xd3\xb3\xc9\xb9???\xd2\xaa???\xd3\xbf\xda\xb5??\xc3\xb5\xc4\xbb\xd8\xb5???????????\xca\xa7???? ???\xe9\xbf\xb4on_disconnected?\xc4\xb2???\n\n\x09*/" },
		{ "CPP_Default_debugID", "" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "datachannel?\xd3\xbf\xda\xb6????\xec\xb2\xbd??\n\nlr_client_start ???\xd8\xb3\xc9\xb9?\xd6\xbb??\xcb\xb5???\xd3\xbf\xda\xb4????\xc9\xb9?\n\n?\xc7\xb7????\xd3\xb3\xc9\xb9???\xd2\xaa???\xd3\xbf\xda\xb5??\xc3\xb5\xc4\xbb\xd8\xb5???????????\xca\xa7???? ???\xe9\xbf\xb4on_disconnected?\xc4\xb2???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::LarkXRCloudAppCompnent_eventLR_Client_Start_Parms), Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "/*\n\x09* stop\n\x09*/" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "* stop" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULarkXRCloudAppCompnent, nullptr, "LR_Client_Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULarkXRCloudAppCompnent);
	UClass* Z_Construct_UClass_ULarkXRCloudAppCompnent_NoRegister()
	{
		return ULarkXRCloudAppCompnent::StaticClass();
	}
	struct Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_FDataChannelOnData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_p_FDataChannelOnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_FOnTaskStatus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_p_FOnTaskStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_FOnAiVoiceResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_p_FOnAiVoiceResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallbackOnGameThread_MetaData[];
#endif
		static void NewProp_bCallbackOnGameThread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallbackOnGameThread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LarkXRCloudApp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_AiVoice_Start, "LR_Client_AiVoice_Start" }, // 3061659983
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Register_Taskstatus_Callback, "LR_Client_Register_Taskstatus_Callback" }, // 4262224831
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendBinary, "LR_Client_SendBinary" }, // 127144950
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_SendText, "LR_Client_SendText" }, // 2556587317
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Start, "LR_Client_Start" }, // 1729449220
		{ &Z_Construct_UFunction_ULarkXRCloudAppCompnent_LR_Client_Stop, "LR_Client_Stop" }, // 3567432575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LarkXRCloudAppCompnent.h" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FDataChannelOnData_MetaData[] = {
		{ "Category", "Events|LarkXR" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FDataChannelOnData = { "p_FDataChannelOnData", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULarkXRCloudAppCompnent, p_FDataChannelOnData), Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FDataChannelOnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FDataChannelOnData_MetaData)) }; // 3443498154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnTaskStatus_MetaData[] = {
		{ "Category", "Events|LarkXR" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnTaskStatus = { "p_FOnTaskStatus", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULarkXRCloudAppCompnent, p_FOnTaskStatus), Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnTaskStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnTaskStatus_MetaData)) }; // 461585202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnAiVoiceResult_MetaData[] = {
		{ "Category", "Events|LarkXR" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnAiVoiceResult = { "p_FOnAiVoiceResult", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULarkXRCloudAppCompnent, p_FOnAiVoiceResult), Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnAiVoiceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnAiVoiceResult_MetaData)) }; // 220980867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_TaskID_MetaData[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "// ??\xc8\xa1??\xc7\xb0?? TaskID\n" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "??\xc8\xa1??\xc7\xb0?? TaskID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_TaskID = { "TaskID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULarkXRCloudAppCompnent, TaskID), METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_TaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_TaskID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread_MetaData[] = {
		{ "Category", "LarkXR" },
		{ "Comment", "// ?\xc7\xb7?????\xcf\xb7?\xdf\xb3\xcc\xbb\xd8\xb5?\n" },
		{ "ModuleRelativePath", "Public/LarkXRCloudAppCompnent.h" },
		{ "ToolTip", "?\xc7\xb7?????\xcf\xb7?\xdf\xb3\xcc\xbb\xd8\xb5?" },
	};
#endif
	void Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread_SetBit(void* Obj)
	{
		((ULarkXRCloudAppCompnent*)Obj)->bCallbackOnGameThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread = { "bCallbackOnGameThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULarkXRCloudAppCompnent), &Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FDataChannelOnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnTaskStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_p_FOnAiVoiceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_TaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::NewProp_bCallbackOnGameThread,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULarkXRCloudAppCompnent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::ClassParams = {
		&ULarkXRCloudAppCompnent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULarkXRCloudAppCompnent()
	{
		if (!Z_Registration_Info_UClass_ULarkXRCloudAppCompnent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULarkXRCloudAppCompnent.OuterSingleton, Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULarkXRCloudAppCompnent.OuterSingleton;
	}
	template<> LARKXRCLOUDAPP_API UClass* StaticClass<ULarkXRCloudAppCompnent>()
	{
		return ULarkXRCloudAppCompnent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULarkXRCloudAppCompnent);
	struct Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::EnumInfo[] = {
		{ LarkDataChannelType_StaticEnum, TEXT("LarkDataChannelType"), &Z_Registration_Info_UEnum_LarkDataChannelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1266445297U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULarkXRCloudAppCompnent, ULarkXRCloudAppCompnent::StaticClass, TEXT("ULarkXRCloudAppCompnent"), &Z_Registration_Info_UClass_ULarkXRCloudAppCompnent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULarkXRCloudAppCompnent), 3435915028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_1748283579(TEXT("/Script/LarkXRCloudApp"),
		Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_app_plugin_501_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
