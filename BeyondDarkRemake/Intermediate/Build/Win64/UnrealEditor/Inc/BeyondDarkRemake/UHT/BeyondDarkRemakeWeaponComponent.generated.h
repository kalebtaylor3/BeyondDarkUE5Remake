// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BeyondDarkRemakeWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABeyondDarkRemakeCharacter;
#ifdef BEYONDDARKREMAKE_BeyondDarkRemakeWeaponComponent_generated_h
#error "BeyondDarkRemakeWeaponComponent.generated.h already included, missing '#pragma once' in BeyondDarkRemakeWeaponComponent.h"
#endif
#define BEYONDDARKREMAKE_BeyondDarkRemakeWeaponComponent_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBeyondDarkRemakeWeaponComponent(); \
	friend struct Z_Construct_UClass_UBeyondDarkRemakeWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UBeyondDarkRemakeWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UBeyondDarkRemakeWeaponComponent)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBeyondDarkRemakeWeaponComponent(UBeyondDarkRemakeWeaponComponent&&); \
	UBeyondDarkRemakeWeaponComponent(const UBeyondDarkRemakeWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeyondDarkRemakeWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeyondDarkRemakeWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBeyondDarkRemakeWeaponComponent) \
	NO_API virtual ~UBeyondDarkRemakeWeaponComponent();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_11_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UBeyondDarkRemakeWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
