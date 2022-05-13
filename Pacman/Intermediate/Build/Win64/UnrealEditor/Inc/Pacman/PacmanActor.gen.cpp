// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Actors/PacmanActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanActor() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanActor_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UScoreComponent_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APacmanActor::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_PlayerActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_PlayerActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacmanActor::execSetFrozen)
	{
		P_GET_UBOOL(Z_Param_IsFrozen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrozen(Z_Param_IsFrozen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacmanActor::execGetIsFrozen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsFrozen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacmanActor::execSetDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirection(Z_Param_Direction);
		P_NATIVE_END;
	}
	void APacmanActor::StaticRegisterNativesAPacmanActor()
	{
		UClass* Class = APacmanActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsFrozen", &APacmanActor::execGetIsFrozen },
			{ "OnOverlapBegin", &APacmanActor::execOnOverlapBegin },
			{ "SetDirection", &APacmanActor::execSetDirection },
			{ "SetFrozen", &APacmanActor::execSetFrozen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics
	{
		struct PacmanActor_eventGetIsFrozen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PacmanActor_eventGetIsFrozen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PacmanActor_eventGetIsFrozen_Parms), &Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "GetIsFrozen", nullptr, nullptr, sizeof(Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::PacmanActor_eventGetIsFrozen_Parms), Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_GetIsFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_GetIsFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics
	{
		struct PacmanActor_eventOnOverlapBegin_Parms
		{
			AActor* PlayerActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlapBegin_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::NewProp_PlayerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::PacmanActor_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacmanActor_SetDirection_Statics
	{
		struct PacmanActor_eventSetDirection_Parms
		{
			FVector Direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_SetDirection_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APacmanActor_SetDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventSetDirection_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanActor_SetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_SetDirection_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "SetDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::PacmanActor_eventSetDirection_Parms), Z_Construct_UFunction_APacmanActor_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacmanActor_SetFrozen_Statics
	{
		struct PacmanActor_eventSetFrozen_Parms
		{
			bool IsFrozen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFrozen_MetaData[];
#endif
		static void NewProp_IsFrozen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFrozen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen_SetBit(void* Obj)
	{
		((PacmanActor_eventSetFrozen_Parms*)Obj)->IsFrozen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen = { "IsFrozen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PacmanActor_eventSetFrozen_Parms), &Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::NewProp_IsFrozen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "SetFrozen", nullptr, nullptr, sizeof(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::PacmanActor_eventSetFrozen_Parms), Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_SetFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_SetFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanActor);
	UClass* Z_Construct_UClass_APacmanActor_NoRegister()
	{
		return APacmanActor::StaticClass();
	}
	struct Z_Construct_UClass_APacmanActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFrozen_MetaData[];
#endif
		static void NewProp_bFrozen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingPawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingPawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacManMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PacManMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APacmanActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APacmanActor_GetIsFrozen, "GetIsFrozen" }, // 507708805
		{ &Z_Construct_UFunction_APacmanActor_OnOverlapBegin, "OnOverlapBegin" }, // 3138686443
		{ &Z_Construct_UFunction_APacmanActor_SetDirection, "SetDirection" }, // 515268558
		{ &Z_Construct_UFunction_APacmanActor_SetFrozen, "SetFrozen" }, // 2361726890
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/PacmanActor.h" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	void Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen_SetBit(void* Obj)
	{
		((APacmanActor*)Obj)->bFrozen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APacmanActor), &Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_FloatingPawnMovement_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_FloatingPawnMovement = { "FloatingPawnMovement", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, FloatingPawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_FloatingPawnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_FloatingPawnMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_PacManMesh_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PacManMesh = { "PacManMesh", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, PacManMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_PacManMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_PacManMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_ScoreComponent_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_ScoreComponent = { "ScoreComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, ScoreComponent), Z_Construct_UClass_UScoreComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_ScoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_ScoreComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_HealthComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_bFrozen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_FloatingPawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_StaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PacManMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_ScoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_HealthComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanActor_Statics::ClassParams = {
		&APacmanActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APacmanActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanActor()
	{
		if (!Z_Registration_Info_UClass_APacmanActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanActor.OuterSingleton, Z_Construct_UClass_APacmanActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanActor.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APacmanActor>()
	{
		return APacmanActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanActor);
	struct Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_PacmanActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_PacmanActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanActor, APacmanActor::StaticClass, TEXT("APacmanActor"), &Z_Registration_Info_UClass_APacmanActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanActor), 803213972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_PacmanActor_h_2818421843(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_PacmanActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman_Source_Pacman_Actors_PacmanActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
