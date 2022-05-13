// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_ScoreComponent_generated_h
#error "ScoreComponent.generated.h already included, missing '#pragma once' in ScoreComponent.h"
#endif
#define PACMAN_ScoreComponent_generated_h

#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_SPARSE_DATA
#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreComponent(); \
	friend struct Z_Construct_UClass_UScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UScoreComponent)


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUScoreComponent(); \
	friend struct Z_Construct_UClass_UScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UScoreComponent)


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreComponent(UScoreComponent&&); \
	NO_API UScoreComponent(const UScoreComponent&); \
public:


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreComponent(UScoreComponent&&); \
	NO_API UScoreComponent(const UScoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScoreComponent)


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_10_PROLOG
#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_RPC_WRAPPERS \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_INCLASS \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Components_ScoreComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class UScoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman_Source_Pacman_Components_ScoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
