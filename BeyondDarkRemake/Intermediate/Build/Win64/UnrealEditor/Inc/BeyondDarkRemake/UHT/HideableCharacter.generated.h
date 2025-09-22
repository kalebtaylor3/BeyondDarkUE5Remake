// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HideableCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHidingSpotComponent;
#ifdef BEYONDDARKREMAKE_HideableCharacter_generated_h
#error "HideableCharacter.generated.h already included, missing '#pragma once' in HideableCharacter.h"
#endif
#define BEYONDDARKREMAKE_HideableCharacter_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnExitHiding_Implementation(UHidingSpotComponent* Spot) {}; \
	virtual void OnEnterHiding_Implementation(UHidingSpotComponent* Spot) {}; \
	DECLARE_FUNCTION(execOnExitHiding); \
	DECLARE_FUNCTION(execOnEnterHiding);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_CALLBACK_WRAPPERS
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHideableCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHideableCharacter(UHideableCharacter&&); \
	UHideableCharacter(const UHideableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideableCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHideableCharacter) \
	NO_API virtual ~UHideableCharacter();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHideableCharacter(); \
	friend struct Z_Construct_UClass_UHideableCharacter_Statics; \
public: \
	DECLARE_CLASS(UHideableCharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UHideableCharacter)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_GENERATED_UINTERFACE_BODY() \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHideableCharacter() {} \
public: \
	typedef UHideableCharacter UClassType; \
	typedef IHideableCharacter ThisClass; \
	static void Execute_OnEnterHiding(UObject* O, UHidingSpotComponent* Spot); \
	static void Execute_OnExitHiding(UObject* O, UHidingSpotComponent* Spot); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_8_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_CALLBACK_WRAPPERS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UHideableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
