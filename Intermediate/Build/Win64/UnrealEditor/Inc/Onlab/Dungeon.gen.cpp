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
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallsVisible_MetaData[];
#endif
		static void NewProp_wallsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wallsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_WallMaterial_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_WallMaterial = { "WallMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, WallMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_WallMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_WallMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_FloorMaterial_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_FloorMaterial = { "FloorMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, FloorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_FloorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_FloorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, RedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, GreenMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, BlueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	void Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible_SetBit(void* Obj)
	{
		((ADungeon*)Obj)->wallsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible = { "wallsVisible", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADungeon), &Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_wallWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_wallWidth = { "wallWidth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, wallWidth), METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_wallWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_wallWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Path), METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_WallMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_FloorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_RedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_GreenMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_BlueMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_wallsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_wallWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Statics::ClassParams = {
		&ADungeon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers),
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
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 4085190940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_1553794374(TEXT("/Script/Onlab"),
		Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Onlab_Source_Onlab_Dungeon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
