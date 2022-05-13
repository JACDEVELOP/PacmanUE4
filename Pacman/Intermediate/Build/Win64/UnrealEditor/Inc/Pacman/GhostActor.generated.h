// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_GhostActor_generated_h
#error "GhostActor.generated.h already included, missing '#pragma once' in GhostActor.h"
#endif
#define PACMAN_GhostActor_generated_h

#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_SPARSE_DATA
#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_RPC_WRAPPERS
#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostActor(); \
	friend struct Z_Construct_UClass_AGhostActor_Statics; \
public: \
	DECLARE_CLASS(AGhostActor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(AGhostActor)


#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGhostActor(); \
	friend struct Z_Construct_UClass_AGhostActor_Statics; \
public: \
	DECLARE_CLASS(AGhostActor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(AGhostActor)


#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGhostActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhostActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostActor(AGhostActor&&); \
	NO_API AGhostActor(const AGhostActor&); \
public:


#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostActor(AGhostActor&&); \
	NO_API AGhostActor(const AGhostActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostActor)


#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_13_PROLOG
#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_RPC_WRAPPERS \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_INCLASS \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Actors_GhostActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class AGhostActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman_Source_Pacman_Actors_GhostActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
