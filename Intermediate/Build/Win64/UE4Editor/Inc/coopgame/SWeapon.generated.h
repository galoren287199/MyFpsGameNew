// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPGAME_SWeapon_generated_h

#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_SPARSE_DATA
#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__SmokeBeamEffect() { return STRUCT_OFFSET(ASWeapon, SmokeBeamEffect); } \
	FORCEINLINE static uint32 __PPO__SmokeTarget() { return STRUCT_OFFSET(ASWeapon, SmokeTarget); } \
	FORCEINLINE static uint32 __PPO__FireShake() { return STRUCT_OFFSET(ASWeapon, FireShake); } \
	FORCEINLINE static uint32 __PPO__BaseDamge() { return STRUCT_OFFSET(ASWeapon, BaseDamge); }


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_9_PROLOG
#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_RPC_WRAPPERS \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_INCLASS \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_INCLASS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_SWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFpsGameNew_Source_coopgame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
