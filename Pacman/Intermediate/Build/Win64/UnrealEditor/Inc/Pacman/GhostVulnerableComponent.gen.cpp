// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Components/GhostVulnerableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostVulnerableComponent() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_UGhostVulnerableComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UGhostVulnerableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void UGhostVulnerableComponent::StaticRegisterNativesUGhostVulnerableComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGhostVulnerableComponent);
	UClass* Z_Construct_UClass_UGhostVulnerableComponent_NoRegister()
	{
		return UGhostVulnerableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGhostVulnerableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVulnerable_MetaData[];
#endif
		static void NewProp_bIsVulnerable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVulnerable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostVulnerableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostVulnerableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/GhostVulnerableComponent.h" },
		{ "ModuleRelativePath", "Components/GhostVulnerableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable_MetaData[] = {
		{ "Category", "GhostVulnerableComponent" },
		{ "ModuleRelativePath", "Components/GhostVulnerableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable_SetBit(void* Obj)
	{
		((UGhostVulnerableComponent*)Obj)->bIsVulnerable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable = { "bIsVulnerable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGhostVulnerableComponent), &Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostVulnerableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostVulnerableComponent_Statics::NewProp_bIsVulnerable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostVulnerableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostVulnerableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGhostVulnerableComponent_Statics::ClassParams = {
		&UGhostVulnerableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGhostVulnerableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostVulnerableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostVulnerableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostVulnerableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostVulnerableComponent()
	{
		if (!Z_Registration_Info_UClass_UGhostVulnerableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGhostVulnerableComponent.OuterSingleton, Z_Construct_UClass_UGhostVulnerableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGhostVulnerableComponent.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UGhostVulnerableComponent>()
	{
		return UGhostVulnerableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostVulnerableComponent);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_GhostVulnerableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_GhostVulnerableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGhostVulnerableComponent, UGhostVulnerableComponent::StaticClass, TEXT("UGhostVulnerableComponent"), &Z_Registration_Info_UClass_UGhostVulnerableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGhostVulnerableComponent), 3692747444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_GhostVulnerableComponent_h_2195907847(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_GhostVulnerableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_GhostVulnerableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
