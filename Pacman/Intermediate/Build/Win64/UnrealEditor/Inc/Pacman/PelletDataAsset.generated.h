// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_PelletDataAsset_generated_h
#error "PelletDataAsset.generated.h already included, missing '#pragma once' in PelletDataAsset.h"
#endif
#define PACMAN_PelletDataAsset_generated_h

#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_SPARSE_DATA
#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_RPC_WRAPPERS
#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPelletDataAsset(); \
	friend struct Z_Construct_UClass_UPelletDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPelletDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UPelletDataAsset)


#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPelletDataAsset(); \
	friend struct Z_Construct_UClass_UPelletDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPelletDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UPelletDataAsset)


#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPelletDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPelletDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPelletDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPelletDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPelletDataAsset(UPelletDataAsset&&); \
	NO_API UPelletDataAsset(const UPelletDataAsset&); \
public:


#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPelletDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPelletDataAsset(UPelletDataAsset&&); \
	NO_API UPelletDataAsset(const UPelletDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPelletDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPelletDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPelletDataAsset)


#define FID_Pacman_Source_Pacman_PelletDataAsset_h_20_PROLOG
#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_SPARSE_DATA \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_RPC_WRAPPERS \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_INCLASS \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman_Source_Pacman_PelletDataAsset_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_SPARSE_DATA \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_INCLASS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_PelletDataAsset_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class UPelletDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman_Source_Pacman_PelletDataAsset_h


#define FOREACH_ENUM_EPELLETTYPE(op) \
	op(EPelletType::Regular) \
	op(EPelletType::Special) 

enum class EPelletType : uint8;
template<> PACMAN_API UEnum* StaticEnum<EPelletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
