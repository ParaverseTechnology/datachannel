// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLarkXRCloudApp_init() {}
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature();
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature();
	LARKXRCLOUDAPP_API UFunction* Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LarkXRCloudApp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LarkXRCloudApp()
	{
		if (!Z_Registration_Info_UPackage__Script_LarkXRCloudApp.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LarkXRCloudApp_DataChannelOnData__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LarkXRCloudApp_OnAiVoiceResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LarkXRCloudApp_OnTaskStatus__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LarkXRCloudApp",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF88026D3,
				0xE8924C6B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LarkXRCloudApp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LarkXRCloudApp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LarkXRCloudApp(Z_Construct_UPackage__Script_LarkXRCloudApp, TEXT("/Script/LarkXRCloudApp"), Z_Registration_Info_UPackage__Script_LarkXRCloudApp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF88026D3, 0xE8924C6B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
