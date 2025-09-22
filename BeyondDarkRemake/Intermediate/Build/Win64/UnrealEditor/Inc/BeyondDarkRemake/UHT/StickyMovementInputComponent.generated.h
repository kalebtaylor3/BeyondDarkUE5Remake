// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StickyMovementInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEYONDDARKREMAKE_StickyMovementInputComponent_generated_h
#error "StickyMovementInputComponent.generated.h already included, missing '#pragma once' in StickyMovementInputComponent.h"
#endif
#define BEYONDDARKREMAKE_StickyMovementInputComponent_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAndGetSmoothed);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStickyMovementInputComponent(); \
	friend struct Z_Construct_UClass_UStickyMovementInputComponent_Statics; \
public: \
	DECLARE_CLASS(UStickyMovementInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UStickyMovementInputComponent)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStickyMovementInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStickyMovementInputComponent(UStickyMovementInputComponent&&); \
	UStickyMovementInputComponent(const UStickyMovementInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStickyMovementInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStickyMovementInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStickyMovementInputComponent) \
	NO_API virtual ~UStickyMovementInputComponent();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_10_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UStickyMovementInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
