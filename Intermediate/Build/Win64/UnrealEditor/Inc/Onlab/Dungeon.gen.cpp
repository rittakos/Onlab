// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onlab/Dungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon() {}
// Cross Module References
	ONLAB_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	ONLAB_API UClass* Z_Construct_UClass_ADungeon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Onlab();
// End Cross Module References
	void ADungeon::StaticRegisterNativesADungeon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeon);
	UClass* Z_Construct_UClass_ADungeon_NoRegister()
	{
		return ADungeon::StaticClass();
	}
	struct Z_Construct_UClass_ADungeon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Onlab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dungeon.h" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Statics::ClassParams = {
		&ADungeon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeon()
	{
		if (!Z_Registration_Info_UClass_ADungeon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeon.OuterSingleton, Z_Construct_UClass_ADungeon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeon.OuterSingleton;
	}
	template<> ONLAB_API UClass* StaticClass<ADungeon>()
	{
		return ADungeon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeon);
	struct Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 3047292444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_178750864(TEXT("/Script/Onlab"),
		Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
