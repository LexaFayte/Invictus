// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShip() {}
// Cross Module References
	INVICTUS_API UClass* Z_Construct_UClass_AMyShip_NoRegister();
	INVICTUS_API UClass* Z_Construct_UClass_AMyShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Invictus();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
// End Cross Module References
	void AMyShip::StaticRegisterNativesAMyShip()
	{
	}
	UClass* Z_Construct_UClass_AMyShip_NoRegister()
	{
		return AMyShip::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Invictus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyShip.h" },
				{ "ModuleRelativePath", "MyShip.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallComponent_MetaData[] = {
				{ "Category", "paper" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyShip.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BallComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AMyShip, BallComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(NewProp_BallComponent_MetaData, ARRAY_COUNT(NewProp_BallComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipAnimation_MetaData[] = {
				{ "Category", "paper" },
				{ "ModuleRelativePath", "MyShip.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "ShipAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AMyShip, ShipAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_ShipAnimation_MetaData, ARRAY_COUNT(NewProp_ShipAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipComponent_MetaData[] = {
				{ "Category", "paper" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyShip.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ShipComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AMyShip, ShipComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(NewProp_ShipComponent_MetaData, ARRAY_COUNT(NewProp_ShipComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BallComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShipAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShipComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyShip>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyShip::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AMyShip, 753358992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyShip(Z_Construct_UClass_AMyShip, &AMyShip::StaticClass, TEXT("/Script/Invictus"), TEXT("AMyShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
