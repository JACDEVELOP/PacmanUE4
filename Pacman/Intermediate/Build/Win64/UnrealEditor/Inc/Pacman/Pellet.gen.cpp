// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Actors/Pellet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePellet() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APellet_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APellet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UClass* Z_Construct_UClass_UPointActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UPelletDataAsset_NoRegister();
// End Cross Module References
	void APellet::StaticRegisterNativesAPellet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APellet);
	UClass* Z_Construct_UClass_APellet_NoRegister()
	{
		return APellet::StaticClass();
	}
	struct Z_Construct_UClass_APellet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelletDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PelletDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APellet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APellet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Pellet.h" },
		{ "ModuleRelativePath", "Actors/Pellet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APellet_Statics::NewProp_PointerComponent_MetaData[] = {
		{ "Category", "Pellet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pellet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APellet_Statics::NewProp_PointerComponent = { "PointerComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APellet, PointerComponent), Z_Construct_UClass_UPointActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APellet_Statics::NewProp_PointerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APellet_Statics::NewProp_PointerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APellet_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Pellet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pellet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APellet_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APellet, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APellet_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APellet_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APellet_Statics::NewProp_PelletDataAsset_MetaData[] = {
		{ "Category", "Pellet" },
		{ "ModuleRelativePath", "Actors/Pellet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APellet_Statics::NewProp_PelletDataAsset = { "PelletDataAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APellet, PelletDataAsset), Z_Construct_UClass_UPelletDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APellet_Statics::NewProp_PelletDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APellet_Statics::NewProp_PelletDataAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APellet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APellet_Statics::NewProp_PointerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APellet_Statics::NewProp_StaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APellet_Statics::NewProp_PelletDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APellet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APellet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APellet_Statics::ClassParams = {
		&APellet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APellet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APellet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APellet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APellet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APellet()
	{
		if (!Z_Registration_Info_UClass_APellet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APellet.OuterSingleton, Z_Construct_UClass_APellet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APellet.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APellet>()
	{
		return APellet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APellet);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_Pellet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_Pellet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APellet, APellet::StaticClass, TEXT("APellet"), &Z_Registration_Info_UClass_APellet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APellet), 3197407472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_Pellet_h_322147375(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_Pellet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_Pellet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
