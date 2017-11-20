// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "shoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshoot() {}
// Cross Module References
	INVICTUS_API UClass* Z_Construct_UClass_Ushoot_NoRegister();
	INVICTUS_API UClass* Z_Construct_UClass_Ushoot();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Invictus();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void Ushoot::StaticRegisterNativesUshoot()
	{
	}
	UClass* Z_Construct_UClass_Ushoot_NoRegister()
	{
		return Ushoot::StaticClass();
	}
	UClass* Z_Construct_UClass_Ushoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Invictus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "shoot.h" },
				{ "ModuleRelativePath", "shoot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletFB_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "shoot.h" },
				{ "ToolTip", "The animation to play while running around" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletFB = { UE4CodeGen_Private::EPropertyClass::Object, "BulletFB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(Ushoot, BulletFB), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_BulletFB_MetaData, ARRAY_COUNT(NewProp_BulletFB_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletFB,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Ushoot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Ushoot::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ushoot, 3995864483);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ushoot(Z_Construct_UClass_Ushoot, &Ushoot::StaticClass, TEXT("/Script/Invictus"), TEXT("Ushoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ushoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
