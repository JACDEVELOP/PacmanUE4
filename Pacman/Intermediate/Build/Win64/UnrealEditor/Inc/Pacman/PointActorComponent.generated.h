// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPelletType : uint8;
#ifdef PACMAN_PointActorComponent_generated_h
#error "PointActorComponent.generated.h already included, missing '#pragma once' in PointActorComponent.h"
#endif
#define PACMAN_PointActorComponent_generated_h

#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_14_DELEGATE \
struct _Script_Pacman_eventPelletEatenEvent_Parms \
{ \
	EPelletType PelletType; \
}; \
static inline void FPelletEatenEvent_DelegateWrapper(const FMulticastScriptDelegate& PelletEatenEvent, EPelletType PelletType) \
{ \
	_Script_Pacman_eventPelletEatenEvent_Parms Parms; \
	Parms.PelletType=PelletType; \
	PelletEatenEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_SPARSE_DATA
#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_RPC_WRAPPERS
#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointActorComponent(); \
	friend struct Z_Construct_UClass_UPointActorComponent_Statics; \
public: \
	DECLARE_CLASS(UPointActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UPointActorComponent)


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPointActorComponent(); \
	friend struct Z_Construct_UClass_UPointActorComponent_Statics; \
public: \
	DECLARE_CLASS(UPointActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(UPointActorComponent)


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointActorComponent(UPointActorComponent&&); \
	NO_API UPointActorComponent(const UPointActorComponent&); \
public:


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointActorComponent(UPointActorComponent&&); \
	NO_API UPointActorComponent(const UPointActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointActorComponent)


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_16_PROLOG
#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_RPC_WRAPPERS \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_INCLASS \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_SPARSE_DATA \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Pacman_Source_Pacman_Components_PointActorComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class UPointActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman_Source_Pacman_Components_PointActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
