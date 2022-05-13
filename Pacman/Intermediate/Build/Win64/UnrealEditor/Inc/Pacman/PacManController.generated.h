// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_PacManController_generated_h
#error "PacManController.generated.h already included, missing '#pragma once' in PacManController.h"
#endif
#define PACMAN_PacManController_generated_h

#define FID_Pacman_Source_Pacman_PacManController_h_16_SPARSE_DATA
#define FID_Pacman_Source_Pacman_PacManController_h_16_RPC_WRAPPERS
#define FID_Pacman_Source_Pacman_PacManController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pacman_Source_Pacman_PacManController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManController(); \
	friend struct Z_Construct_UClass_APacManController_Statics; \
public: \
	DECLARE_CLASS(APacManController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacManController)


#define FID_Pacman_Source_Pacman_PacManController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPacManController(); \
	friend struct Z_Construct_UClass_APacManController_Statics; \
public: \
	DECLARE_CLASS(APacManController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacManController)


#define FID_Pacman_Source_Pacman_PacManController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManController(APacManController&&); \
	NO_API APacManController(const APacManController&); \
public:


#define FID_Pacman_Source_Pacman_PacManController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManController(APacManController&&); \
	NO_API APacManController(const APacManController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManController)


#define FID_Pacman_Source_Pacman_PacManController_h_13_PROLOG
#define FID_Pacman_Source_Pacman_PacManController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_PacManController_h_16_SPARSE_DATA \
	FID_Pacman_Source_Pacman_PacManController_h_16_RPC_WRAPPERS \
	FID_Pacman_Source_Pacman_PacManController_h_16_INCLASS \
	FID_Pacman_Source_Pacman_PacManController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman_Source_Pacman_PacManController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_PacManController_h_16_SPARSE_DATA \
	FID_Pacman_Source_Pacman_PacManController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_PacManController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_PacManController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacManController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman_Source_Pacman_PacManController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
