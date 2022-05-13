// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Actors/GhostActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostActor() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_AGhostActor_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_AGhostActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UGhostDataAsset_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UGhostVulnerableComponent_NoRegister();
// End Cross Module References
	void AGhostActor::StaticRegisterNativesAGhostActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhostActor);
	UClass* Z_Construct_UClass_AGhostActor_NoRegister()
	{
		return AGhostActor::StaticClass();
	}
	struct Z_Construct_UClass_AGhostActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingPawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingPawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulnerableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VulnerableComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhostActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/GhostActor.h" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_FloatingPawnMovement_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_FloatingPawnMovement = { "FloatingPawnMovement", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, FloatingPawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_FloatingPawnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_FloatingPawnMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostMesh_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostMesh = { "GhostMesh", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, GhostMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostDataAsset_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostDataAsset = { "GhostDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, GhostDataAsset), Z_Construct_UClass_UGhostDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostDataAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_AttackComponent_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_AttackComponent = { "AttackComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, AttackComponent), Z_Construct_UClass_UAttackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_AttackComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_AttackComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostActor_Statics::NewProp_VulnerableComponent_MetaData[] = {
		{ "Category", "GhostActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/GhostActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostActor_Statics::NewProp_VulnerableComponent = { "VulnerableComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostActor, VulnerableComponent), Z_Construct_UClass_UGhostVulnerableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::NewProp_VulnerableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::NewProp_VulnerableComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_FloatingPawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_StaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_GhostDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_AttackComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostActor_Statics::NewProp_VulnerableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhostActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhostActor_Statics::ClassParams = {
		&AGhostActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGhostActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGhostActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhostActor()
	{
		if (!Z_Registration_Info_UClass_AGhostActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhostActor.OuterSingleton, Z_Construct_UClass_AGhostActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGhostActor.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<AGhostActor>()
	{
		return AGhostActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostActor);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_GhostActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_GhostActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGhostActor, AGhostActor::StaticClass, TEXT("AGhostActor"), &Z_Registration_Info_UClass_AGhostActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostActor), 2698392290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_GhostActor_h_3429790298(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_GhostActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_GhostActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
