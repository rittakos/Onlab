// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onlab/OnlabGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlabGameModeBase() {}
// Cross Module References
	ONLAB_API UClass* Z_Construct_UClass_AOnlabGameModeBase_NoRegister();
	ONLAB_API UClass* Z_Construct_UClass_AOnlabGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Onlab();
// End Cross Module References
	void AOnlabGameModeBase::StaticRegisterNativesAOnlabGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlabGameModeBase);
	UClass* Z_Construct_UClass_AOnlabGameModeBase_NoRegister()
	{
		return AOnlabGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOnlabGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlabGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Onlab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlabGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OnlabGameModeBase.h" },
		{ "ModuleRelativePath", "OnlabGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlabGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlabGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlabGameModeBase_Statics::ClassParams = {
		&AOnlabGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlabGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlabGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlabGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AOnlabGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlabGameModeBase.OuterSingleton, Z_Construct_UClass_AOnlabGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlabGameModeBase.OuterSingleton;
	}
	template<> ONLAB_API UClass* StaticClass<AOnlabGameModeBase>()
	{
		return AOnlabGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlabGameModeBase);
	struct Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_OnlabGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_OnlabGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlabGameModeBase, AOnlabGameModeBase::StaticClass, TEXT("AOnlabGameModeBase"), &Z_Registration_Info_UClass_AOnlabGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlabGameModeBase), 3257287886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_OnlabGameModeBase_h_3833975565(TEXT("/Script/Onlab"),
		Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_OnlabGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_OnlabGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
