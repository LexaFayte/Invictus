// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "testBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestBullet() {}
// Cross Module References
	INVICTUS_API UClass* Z_Construct_UClass_AtestBullet_NoRegister();
	INVICTUS_API UClass* Z_Construct_UClass_AtestBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Invictus();
// End Cross Module References
	void AtestBullet::StaticRegisterNativesAtestBullet()
	{
	}
	UClass* Z_Construct_UClass_AtestBullet_NoRegister()
	{
		return AtestBullet::StaticClass();
	}
	UClass* Z_Construct_UClass_AtestBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Invictus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "testBullet.h" },
				{ "ModuleRelativePath", "testBullet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AtestBullet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AtestBullet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AtestBullet, 75398270);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AtestBullet(Z_Construct_UClass_AtestBullet, &AtestBullet::StaticClass, TEXT("/Script/Invictus"), TEXT("AtestBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtestBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
