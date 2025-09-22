// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BeyondDarkRemakeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEYONDDARKREMAKE_BeyondDarkRemakeCharacter_generated_h
#error "BeyondDarkRemakeCharacter.generated.h already included, missing '#pragma once' in BeyondDarkRemakeCharacter.h"
#endif
#define BEYONDDARKREMAKE_BeyondDarkRemakeCharacter_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearMove); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABeyondDarkRemakeCharacter(); \
	friend struct Z_Construct_UClass_ABeyondDarkRemakeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABeyondDarkRemakeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(ABeyondDarkRemakeCharacter)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABeyondDarkRemakeCharacter(ABeyondDarkRemakeCharacter&&); \
	ABeyondDarkRemakeCharacter(const ABeyondDarkRemakeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeyondDarkRemakeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeyondDarkRemakeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABeyondDarkRemakeCharacter) \
	NO_API virtual ~ABeyondDarkRemakeCharacter();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_20_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class ABeyondDarkRemakeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
