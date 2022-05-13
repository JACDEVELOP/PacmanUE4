// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/GhostDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostDataAsset() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_UGhostDataAsset_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UGhostDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UGhostDataAsset::StaticRegisterNativesUGhostDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGhostDataAsset);
	UClass* Z_Construct_UClass_UGhostDataAsset_NoRegister()
	{
		return UGhostDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGhostDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulnerableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VulnerableMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulnerableMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VulnerableMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n*/" },
		{ "IncludePath", "GhostDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GhostDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_NormalMesh_MetaData[] = {
		{ "Category", "GhostDataAsset" },
		{ "ModuleRelativePath", "GhostDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_NormalMesh = { "NormalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostDataAsset, NormalMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_NormalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_NormalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMesh_MetaData[] = {
		{ "Category", "GhostDataAsset" },
		{ "ModuleRelativePath", "GhostDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMesh = { "VulnerableMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostDataAsset, VulnerableMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "GhostDataAsset" },
		{ "ModuleRelativePath", "GhostDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostDataAsset, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMaterial_MetaData[] = {
		{ "Category", "GhostDataAsset" },
		{ "ModuleRelativePath", "GhostDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMaterial = { "VulnerableMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostDataAsset, VulnerableMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_NormalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostDataAsset_Statics::NewProp_VulnerableMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGhostDataAsset_Statics::ClassParams = {
		&UGhostDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGhostDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostDataAsset()
	{
		if (!Z_Registration_Info_UClass_UGhostDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGhostDataAsset.OuterSingleton, Z_Construct_UClass_UGhostDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGhostDataAsset.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UGhostDataAsset>()
	{
		return UGhostDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostDataAsset);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_GhostDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_GhostDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGhostDataAsset, UGhostDataAsset::StaticClass, TEXT("UGhostDataAsset"), &Z_Registration_Info_UClass_UGhostDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGhostDataAsset), 4115381986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_GhostDataAsset_h_1758756048(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_GhostDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_GhostDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
