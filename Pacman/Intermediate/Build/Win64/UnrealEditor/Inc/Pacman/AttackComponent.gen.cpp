// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Components/AttackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackComponent() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UAttackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void UAttackComponent::StaticRegisterNativesUAttackComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackComponent);
	UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
	{
		return UAttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttackComponent.h" },
		{ "ModuleRelativePath", "Components/AttackComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackComponent_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Components/AttackComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackComponent, Damage), METADATA_PARAMS(Z_Construct_UClass_UAttackComponent_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
		&UAttackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackComponent()
	{
		if (!Z_Registration_Info_UClass_UAttackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackComponent.OuterSingleton, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackComponent.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UAttackComponent>()
	{
		return UAttackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackComponent);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_AttackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_AttackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackComponent, UAttackComponent::StaticClass, TEXT("UAttackComponent"), &Z_Registration_Info_UClass_UAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackComponent), 1590020737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_AttackComponent_h_2929221185(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_AttackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_AttackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
