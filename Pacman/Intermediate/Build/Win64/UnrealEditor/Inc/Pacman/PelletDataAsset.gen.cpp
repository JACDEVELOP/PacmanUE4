// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PelletDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePelletDataAsset() {}
// Cross Module References
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EPelletType();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UClass* Z_Construct_UClass_UPelletDataAsset_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UPelletDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPelletType;
	static UEnum* EPelletType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPelletType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPelletType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pacman_EPelletType, Z_Construct_UPackage__Script_Pacman(), TEXT("EPelletType"));
		}
		return Z_Registration_Info_UEnum_EPelletType.OuterSingleton;
	}
	template<> PACMAN_API UEnum* StaticEnum<EPelletType>()
	{
		return EPelletType_StaticEnum();
	}
	struct Z_Construct_UEnum_Pacman_EPelletType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Pacman_EPelletType_Statics::Enumerators[] = {
		{ "EPelletType::Regular", (int64)EPelletType::Regular },
		{ "EPelletType::Special", (int64)EPelletType::Special },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Pacman_EPelletType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n*/" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
		{ "Regular.Comment", "/**\n * \n*/" },
		{ "Regular.Name", "EPelletType::Regular" },
		{ "Special.Comment", "/**\n * \n*/" },
		{ "Special.Name", "EPelletType::Special" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pacman_EPelletType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Pacman,
		nullptr,
		"EPelletType",
		"EPelletType",
		Z_Construct_UEnum_Pacman_EPelletType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EPelletType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Pacman_EPelletType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EPelletType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Pacman_EPelletType()
	{
		if (!Z_Registration_Info_UEnum_EPelletType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPelletType.InnerSingleton, Z_Construct_UEnum_Pacman_EPelletType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPelletType.InnerSingleton;
	}
	void UPelletDataAsset::StaticRegisterNativesUPelletDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPelletDataAsset);
	UClass* Z_Construct_UClass_UPelletDataAsset_NoRegister()
	{
		return UPelletDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPelletDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PelletType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelletType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PelletType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumptionSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConsumptionSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPelletDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PelletDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType_MetaData[] = {
		{ "Category", "PelletDataAsset" },
		{ "Comment", "//VARIABLES\n" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
		{ "ToolTip", "VARIABLES" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType = { "PelletType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPelletDataAsset, PelletType), Z_Construct_UEnum_Pacman_EPelletType, METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType_MetaData)) }; // 1814014092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ConsumptionSound_MetaData[] = {
		{ "Category", "PelletDataAsset" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ConsumptionSound = { "ConsumptionSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPelletDataAsset, ConsumptionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ConsumptionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ConsumptionSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "PelletDataAsset" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPelletDataAsset, ActorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ActorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ActorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "PelletDataAsset" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPelletDataAsset, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PointAmount_MetaData[] = {
		{ "Category", "PelletDataAsset" },
		{ "ModuleRelativePath", "PelletDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PointAmount = { "PointAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPelletDataAsset, PointAmount), METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PointAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PointAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPelletDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PelletType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ConsumptionSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPelletDataAsset_Statics::NewProp_PointAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPelletDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPelletDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPelletDataAsset_Statics::ClassParams = {
		&UPelletDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPelletDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPelletDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPelletDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPelletDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPelletDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPelletDataAsset.OuterSingleton, Z_Construct_UClass_UPelletDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPelletDataAsset.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UPelletDataAsset>()
	{
		return UPelletDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPelletDataAsset);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::EnumInfo[] = {
		{ EPelletType_StaticEnum, TEXT("EPelletType"), &Z_Registration_Info_UEnum_EPelletType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1814014092U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPelletDataAsset, UPelletDataAsset::StaticClass, TEXT("UPelletDataAsset"), &Z_Registration_Info_UClass_UPelletDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPelletDataAsset), 4010522446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_4237718592(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_PelletDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
