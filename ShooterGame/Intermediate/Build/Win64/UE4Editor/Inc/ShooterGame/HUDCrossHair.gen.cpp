// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/HUDCrossHair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDCrossHair() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AHUDCrossHair_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AHUDCrossHair();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AHUDCrossHair::StaticRegisterNativesAHUDCrossHair()
	{
	}
	UClass* Z_Construct_UClass_AHUDCrossHair_NoRegister()
	{
		return AHUDCrossHair::StaticClass();
	}
	struct Z_Construct_UClass_AHUDCrossHair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUDCrossHair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDCrossHair_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUDCrossHair.h" },
		{ "ModuleRelativePath", "Public/HUDCrossHair.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDCrossHair_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "HUDCrossHair" },
		{ "Comment", "// This will be drawn at the center of the screen.\n" },
		{ "ModuleRelativePath", "Public/HUDCrossHair.h" },
		{ "ToolTip", "This will be drawn at the center of the screen." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUDCrossHair_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUDCrossHair, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUDCrossHair_Statics::NewProp_CrosshairTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDCrossHair_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUDCrossHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDCrossHair_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUDCrossHair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUDCrossHair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUDCrossHair_Statics::ClassParams = {
		&AHUDCrossHair::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHUDCrossHair_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHUDCrossHair_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUDCrossHair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDCrossHair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUDCrossHair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUDCrossHair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUDCrossHair, 4137613524);
	template<> SHOOTERGAME_API UClass* StaticClass<AHUDCrossHair>()
	{
		return AHUDCrossHair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUDCrossHair(Z_Construct_UClass_AHUDCrossHair, &AHUDCrossHair::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AHUDCrossHair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUDCrossHair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
