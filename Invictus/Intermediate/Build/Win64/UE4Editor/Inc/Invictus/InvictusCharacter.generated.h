// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVICTUS_InvictusCharacter_generated_h
#error "InvictusCharacter.generated.h already included, missing '#pragma once' in InvictusCharacter.h"
#endif
#define INVICTUS_InvictusCharacter_generated_h

#define Invictus_Source_Invictus_InvictusCharacter_h_22_RPC_WRAPPERS
#define Invictus_Source_Invictus_InvictusCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Invictus_Source_Invictus_InvictusCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvictusCharacter(); \
	friend INVICTUS_API class UClass* Z_Construct_UClass_AInvictusCharacter(); \
public: \
	DECLARE_CLASS(AInvictusCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invictus"), NO_API) \
	DECLARE_SERIALIZER(AInvictusCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Invictus_Source_Invictus_InvictusCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAInvictusCharacter(); \
	friend INVICTUS_API class UClass* Z_Construct_UClass_AInvictusCharacter(); \
public: \
	DECLARE_CLASS(AInvictusCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invictus"), NO_API) \
	DECLARE_SERIALIZER(AInvictusCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Invictus_Source_Invictus_InvictusCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvictusCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvictusCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvictusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvictusCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvictusCharacter(AInvictusCharacter&&); \
	NO_API AInvictusCharacter(const AInvictusCharacter&); \
public:


#define Invictus_Source_Invictus_InvictusCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvictusCharacter(AInvictusCharacter&&); \
	NO_API AInvictusCharacter(const AInvictusCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvictusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvictusCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvictusCharacter)


#define Invictus_Source_Invictus_InvictusCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AInvictusCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AInvictusCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AInvictusCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AInvictusCharacter, IdleAnimation); }


#define Invictus_Source_Invictus_InvictusCharacter_h_19_PROLOG
#define Invictus_Source_Invictus_InvictusCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invictus_Source_Invictus_InvictusCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Invictus_Source_Invictus_InvictusCharacter_h_22_RPC_WRAPPERS \
	Invictus_Source_Invictus_InvictusCharacter_h_22_INCLASS \
	Invictus_Source_Invictus_InvictusCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Invictus_Source_Invictus_InvictusCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invictus_Source_Invictus_InvictusCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Invictus_Source_Invictus_InvictusCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Invictus_Source_Invictus_InvictusCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Invictus_Source_Invictus_InvictusCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Invictus_Source_Invictus_InvictusCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
