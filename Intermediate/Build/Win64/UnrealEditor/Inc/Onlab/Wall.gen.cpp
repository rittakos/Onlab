// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onlab/Wall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}
// Cross Module References
	ONLAB_API UClass* Z_Construct_UClass_AWall_NoRegister();
	ONLAB_API UClass* Z_Construct_UClass_AWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Onlab();
// End Cross Module References
	void AWall::StaticRegisterNativesAWall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWall);
	UClass* Z_Construct_UClass_AWall_NoRegister()
	{
		return AWall::StaticClass();
	}
	struct Z_Construct_UClass_AWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Onlab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wall.h" },
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
		&AWall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWall()
	{
		if (!Z_Registration_Info_UClass_AWall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWall.OuterSingleton, Z_Construct_UClass_AWall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWall.OuterSingleton;
	}
	template<> ONLAB_API UClass* StaticClass<AWall>()
	{
		return AWall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
	struct Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Wall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Wall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWall, AWall::StaticClass, TEXT("AWall"), &Z_Registration_Info_UClass_AWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWall), 2967430988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Wall_h_4049742723(TEXT("/Script/Onlab"),
		Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Wall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Wall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
