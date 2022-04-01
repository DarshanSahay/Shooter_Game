// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERGAME_CharacterMovement_generated_h
#error "CharacterMovement.generated.h already included, missing '#pragma once' in CharacterMovement.h"
#endif
#define SHOOTERGAME_CharacterMovement_generated_h

#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeSpeed); \
	DECLARE_FUNCTION(execFire);


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeSpeed); \
	DECLARE_FUNCTION(execFire);


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public:


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMovement)


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ACharacterMovement, ProjectileClass); }


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_18_PROLOG
#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_INCLASS \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_CharacterMovement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class ACharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_CharacterMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
