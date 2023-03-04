// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onlab/ProceduralMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMesh() {}
// Cross Module References
	ONLAB_API UClass* Z_Construct_UClass_UProceduralMesh_NoRegister();
	ONLAB_API UClass* Z_Construct_UClass_UProceduralMesh();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Onlab();
// End Cross Module References
	void UProceduralMesh::StaticRegisterNativesUProceduralMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralMesh);
	UClass* Z_Construct_UClass_UProceduralMesh_NoRegister()
	{
		return UProceduralMesh::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Onlab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ProceduralMesh.h" },
		{ "ModuleRelativePath", "ProceduralMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralMesh_Statics::ClassParams = {
		&UProceduralMesh::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralMesh()
	{
		if (!Z_Registration_Info_UClass_UProceduralMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralMesh.OuterSingleton, Z_Construct_UClass_UProceduralMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralMesh.OuterSingleton;
	}
	template<> ONLAB_API UClass* StaticClass<UProceduralMesh>()
	{
		return UProceduralMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralMesh);
	struct Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_ProceduralMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_ProceduralMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralMesh, UProceduralMesh::StaticClass, TEXT("UProceduralMesh"), &Z_Registration_Info_UClass_UProceduralMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralMesh), 3107625185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_ProceduralMesh_h_3976661276(TEXT("/Script/Onlab"),
		Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_ProceduralMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_ProceduralMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
