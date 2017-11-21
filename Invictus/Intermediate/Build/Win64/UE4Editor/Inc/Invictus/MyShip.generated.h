// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVICTUS_MyShip_generated_h
#error "MyShip.generated.h already included, missing '#pragma once' in MyShip.h"
#endif
#define INVICTUS_MyShip_generated_h

#define Invictus_Source_Invictus_MyShip_h_13_RPC_WRAPPERS
#define Invictus_Source_Invictus_MyShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Invictus_Source_Invictus_MyShip_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyShip(); \
	friend INVICTUS_API class UClass* Z_Construct_UClass_AMyShip(); \
public: \
	DECLARE_CLASS(AMyShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invictus"), NO_API) \
	DECLARE_SERIALIZER(AMyShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Invictus_Source_Invictus_MyShip_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyShip(); \
	friend INVICTUS_API class UClass* Z_Construct_UClass_AMyShip(); \
public: \
	DECLARE_CLASS(AMyShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invictus"), NO_API) \
	DECLARE_SERIALIZER(AMyShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Invictus_Source_Invictus_MyShip_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyShip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShip(AMyShip&&); \
	NO_API AMyShip(const AMyShip&); \
public:


#define Invictus_Source_Invictus_MyShip_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyShip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyShip(AMyShip&&); \
	NO_API AMyShip(const AMyShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyShip); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyShip)


#define Invictus_Source_Invictus_MyShip_h_13_PRIVATE_PROPERTY_OFFSET
#define Invictus_Source_Invictus_MyShip_h_10_PROLOG
#define Invictus_Source_Invictus_MyShip_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invictus_Source_Invictus_MyShip_h_13_PRIVATE_PROPERTY_OFFSET \
	Invictus_Source_Invictus_MyShip_h_13_RPC_WRAPPERS \
	Invictus_Source_Invictus_MyShip_h_13_INCLASS \
	Invictus_Source_Invictus_MyShip_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Invictus_Source_Invictus_MyShip_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invictus_Source_Invictus_MyShip_h_13_PRIVATE_PROPERTY_OFFSET \
	Invictus_Source_Invictus_MyShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Invictus_Source_Invictus_MyShip_h_13_INCLASS_NO_PURE_DECLS \
	Invictus_Source_Invictus_MyShip_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyShip."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Invictus_Source_Invictus_MyShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
