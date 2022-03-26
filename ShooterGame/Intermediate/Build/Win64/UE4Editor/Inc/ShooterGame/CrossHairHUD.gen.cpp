// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/CrossHairHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossHairHUD() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_ACrossHairHUD_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_ACrossHairHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void ACrossHairHUD::StaticRegisterNativesACrossHairHUD()
	{
	}
	UClass* Z_Construct_UClass_ACrossHairHUD_NoRegister()
	{
		return ACrossHairHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACrossHairHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossHairHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossHairHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CrossHairHUD.h" },
		{ "ModuleRelativePath", "Public/CrossHairHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossHairHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossHairHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossHairHUD_Statics::ClassParams = {
		&ACrossHairHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossHairHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossHairHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossHairHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossHairHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossHairHUD, 2492867987);
	template<> SHOOTERGAME_API UClass* StaticClass<ACrossHairHUD>()
	{
		return ACrossHairHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossHairHUD(Z_Construct_UClass_ACrossHairHUD, &ACrossHairHUD::StaticClass, TEXT("/Script/ShooterGame"), TEXT("ACrossHairHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossHairHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
