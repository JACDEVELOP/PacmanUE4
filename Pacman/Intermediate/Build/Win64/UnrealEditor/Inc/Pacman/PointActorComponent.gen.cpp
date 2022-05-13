// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Components/PointActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointActorComponent() {}
// Cross Module References
	PACMAN_API UFunction* Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EPelletType();
	PACMAN_API UClass* Z_Construct_UClass_UPointActorComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UPointActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PACMAN_API UClass* Z_Construct_UClass_UPelletDataAsset_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics
	{
		struct _Script_Pacman_eventPelletEatenEvent_Parms
		{
			EPelletType PelletType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PelletType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PelletType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::NewProp_PelletType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::NewProp_PelletType = { "PelletType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Pacman_eventPelletEatenEvent_Parms, PelletType), Z_Construct_UEnum_Pacman_EPelletType, METADATA_PARAMS(nullptr, 0) }; // 1814014092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::NewProp_PelletType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::NewProp_PelletType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/PointActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pacman, nullptr, "PelletEatenEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::_Script_Pacman_eventPelletEatenEvent_Parms), Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UPointActorComponent::StaticRegisterNativesUPointActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointActorComponent);
	UClass* Z_Construct_UClass_UPointActorComponent_NoRegister()
	{
		return UPointActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelletEatenEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PelletEatenEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelletDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PelletDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PointActorComponent.h" },
		{ "ModuleRelativePath", "Components/PointActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointActorComponent_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Components/PointActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointActorComponent_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointActorComponent, Points), METADATA_PARAMS(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletEatenEvent_MetaData[] = {
		{ "ModuleRelativePath", "Components/PointActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletEatenEvent = { "PelletEatenEvent", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointActorComponent, PelletEatenEvent), Z_Construct_UDelegateFunction_Pacman_PelletEatenEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletEatenEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletEatenEvent_MetaData)) }; // 4231683093
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletDataAsset_MetaData[] = {
		{ "Category", "PointActorComponent" },
		{ "ModuleRelativePath", "Components/PointActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletDataAsset = { "PelletDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointActorComponent, PelletDataAsset), Z_Construct_UClass_UPelletDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletDataAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointActorComponent_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletEatenEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointActorComponent_Statics::NewProp_PelletDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointActorComponent_Statics::ClassParams = {
		&UPointActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPointActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointActorComponent()
	{
		if (!Z_Registration_Info_UClass_UPointActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointActorComponent.OuterSingleton, Z_Construct_UClass_UPointActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointActorComponent.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UPointActorComponent>()
	{
		return UPointActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointActorComponent);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_PointActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_PointActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointActorComponent, UPointActorComponent::StaticClass, TEXT("UPointActorComponent"), &Z_Registration_Info_UClass_UPointActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointActorComponent), 2539346175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_PointActorComponent_h_2715213538(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_PointActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_PointActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
