// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemTest/OnlineSubsystemTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemTestGameMode() {}
// Cross Module References
	ONLINESUBSYSTEMTEST_API UClass* Z_Construct_UClass_AOnlineSubsystemTestGameMode_NoRegister();
	ONLINESUBSYSTEMTEST_API UClass* Z_Construct_UClass_AOnlineSubsystemTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemTest();
// End Cross Module References
	void AOnlineSubsystemTestGameMode::StaticRegisterNativesAOnlineSubsystemTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineSubsystemTestGameMode);
	UClass* Z_Construct_UClass_AOnlineSubsystemTestGameMode_NoRegister()
	{
		return AOnlineSubsystemTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OnlineSubsystemTestGameMode.h" },
		{ "ModuleRelativePath", "OnlineSubsystemTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineSubsystemTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::ClassParams = {
		&AOnlineSubsystemTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineSubsystemTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AOnlineSubsystemTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineSubsystemTestGameMode.OuterSingleton, Z_Construct_UClass_AOnlineSubsystemTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlineSubsystemTestGameMode.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMTEST_API UClass* StaticClass<AOnlineSubsystemTestGameMode>()
	{
		return AOnlineSubsystemTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineSubsystemTestGameMode);
	struct Z_CompiledInDeferFile_FID_OnlineSubsystem_Source_OnlineSubsystemTest_OnlineSubsystemTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineSubsystem_Source_OnlineSubsystemTest_OnlineSubsystemTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineSubsystemTestGameMode, AOnlineSubsystemTestGameMode::StaticClass, TEXT("AOnlineSubsystemTestGameMode"), &Z_Registration_Info_UClass_AOnlineSubsystemTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineSubsystemTestGameMode), 2599462523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineSubsystem_Source_OnlineSubsystemTest_OnlineSubsystemTestGameMode_h_4126458315(TEXT("/Script/OnlineSubsystemTest"),
		Z_CompiledInDeferFile_FID_OnlineSubsystem_Source_OnlineSubsystemTest_OnlineSubsystemTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineSubsystem_Source_OnlineSubsystemTest_OnlineSubsystemTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
