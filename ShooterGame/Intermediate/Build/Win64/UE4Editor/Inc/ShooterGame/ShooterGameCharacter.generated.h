// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameCharacter_generated_h
#error "ShooterGameCharacter.generated.h already included, missing '#pragma once' in ShooterGameCharacter.h"
#endif
#define SHOOTERGAME_ShooterGameCharacter_generated_h

#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameCharacter(); \
	friend struct Z_Construct_UClass_AShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameCharacter)


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameCharacter(); \
	friend struct Z_Construct_UClass_AShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameCharacter)


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameCharacter(AShooterGameCharacter&&); \
	NO_API AShooterGameCharacter(const AShooterGameCharacter&); \
public:


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameCharacter(AShooterGameCharacter&&); \
	NO_API AShooterGameCharacter(const AShooterGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterGameCharacter)


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShooterGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShooterGameCharacter, FollowCamera); }


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_9_PROLOG
#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_INCLASS \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_ShooterGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_ShooterGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
