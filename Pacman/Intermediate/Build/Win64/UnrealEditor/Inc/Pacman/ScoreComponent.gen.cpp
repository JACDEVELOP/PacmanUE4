// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Components/ScoreComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreComponent() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_UScoreComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UScoreComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	DEFINE_FUNCTION(UScoreComponent::execSetScore)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScore(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScoreComponent::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	void UScoreComponent::StaticRegisterNativesUScoreComponent()
	{
		UClass* Class = UScoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &UScoreComponent::execGetScore },
			{ "SetScore", &UScoreComponent::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScoreComponent_GetScore_Statics
	{
		struct ScoreComponent_eventGetScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScoreComponent_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreComponent_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreComponent_GetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreComponent_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ScoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreComponent_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreComponent, nullptr, "GetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScoreComponent_GetScore_Statics::ScoreComponent_eventGetScore_Parms), Z_Construct_UFunction_UScoreComponent_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreComponent_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreComponent_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreComponent_SetScore_Statics
	{
		struct ScoreComponent_eventSetScore_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreComponent_eventSetScore_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ScoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreComponent_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreComponent, nullptr, "SetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::ScoreComponent_eventSetScore_Parms), Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreComponent_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreComponent_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScoreComponent);
	UClass* Z_Construct_UClass_UScoreComponent_NoRegister()
	{
		return UScoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreComponent_GetScore, "GetScore" }, // 936350199
		{ &Z_Construct_UFunction_UScoreComponent_SetScore, "SetScore" }, // 2526327592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ScoreComponent.h" },
		{ "ModuleRelativePath", "Components/ScoreComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreComponent_Statics::NewProp_Score_MetaData[] = {
		{ "ModuleRelativePath", "Components/ScoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScoreComponent_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreComponent, Score), METADATA_PARAMS(Z_Construct_UClass_UScoreComponent_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreComponent_Statics::NewProp_Score_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreComponent_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreComponent_Statics::ClassParams = {
		&UScoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScoreComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScoreComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreComponent()
	{
		if (!Z_Registration_Info_UClass_UScoreComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreComponent.OuterSingleton, Z_Construct_UClass_UScoreComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScoreComponent.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<UScoreComponent>()
	{
		return UScoreComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreComponent);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_ScoreComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_ScoreComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScoreComponent, UScoreComponent::StaticClass, TEXT("UScoreComponent"), &Z_Registration_Info_UClass_UScoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreComponent), 1897880043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_ScoreComponent_h_2347750364(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_ScoreComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Components_ScoreComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
