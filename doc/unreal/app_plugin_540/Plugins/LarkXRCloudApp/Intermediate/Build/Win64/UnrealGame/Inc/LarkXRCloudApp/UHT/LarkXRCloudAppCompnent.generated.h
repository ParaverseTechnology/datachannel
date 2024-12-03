// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LarkXRCloudAppCompnent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class LarkDataChannelType : uint8;
#ifdef LARKXRCLOUDAPP_LarkXRCloudAppCompnent_generated_h
#error "LarkXRCloudAppCompnent.generated.h already included, missing '#pragma once' in LarkXRCloudAppCompnent.h"
#endif
#define LARKXRCLOUDAPP_LarkXRCloudAppCompnent_generated_h

#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_17_DELEGATE \
LARKXRCLOUDAPP_API void FOnTaskStatus_DelegateWrapper(const FMulticastScriptDelegate& OnTaskStatus, bool status, const FString& taskId);


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_18_DELEGATE \
LARKXRCLOUDAPP_API void FDataChannelOnData_DelegateWrapper(const FMulticastScriptDelegate& DataChannelOnData, LarkDataChannelType type, const FString& dataText);


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_19_DELEGATE \
LARKXRCLOUDAPP_API void FOnAiVoiceResult_DelegateWrapper(const FMulticastScriptDelegate& OnAiVoiceResult, bool isUrl, const FString& ngl, const FString& url);


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLR_Client_AiVoice_Start); \
	DECLARE_FUNCTION(execLR_Client_Stop); \
	DECLARE_FUNCTION(execLR_Client_SendBinary); \
	DECLARE_FUNCTION(execLR_Client_SendText); \
	DECLARE_FUNCTION(execLR_Client_Start); \
	DECLARE_FUNCTION(execLR_Client_Register_Taskstatus_Callback);


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULarkXRCloudAppCompnent(); \
	friend struct Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics; \
public: \
	DECLARE_CLASS(ULarkXRCloudAppCompnent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LarkXRCloudApp"), NO_API) \
	DECLARE_SERIALIZER(ULarkXRCloudAppCompnent)


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULarkXRCloudAppCompnent(ULarkXRCloudAppCompnent&&); \
	ULarkXRCloudAppCompnent(const ULarkXRCloudAppCompnent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULarkXRCloudAppCompnent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULarkXRCloudAppCompnent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULarkXRCloudAppCompnent) \
	NO_API virtual ~ULarkXRCloudAppCompnent();


#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_20_PROLOG
#define FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS_NO_PURE_DECLS \
	FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LARKXRCLOUDAPP_API UClass* StaticClass<class ULarkXRCloudAppCompnent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_app_plugin_540_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h


#define FOREACH_ENUM_LARKDATACHANNELTYPE(op) \
	op(LarkDataChannelType::DATA_STRING) \
	op(LarkDataChannelType::DATA_BIN) 

enum class LarkDataChannelType : uint8;
template<> struct TIsUEnumClass<LarkDataChannelType> { enum { Value = true }; };
template<> LARKXRCLOUDAPP_API UEnum* StaticEnum<LarkDataChannelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
