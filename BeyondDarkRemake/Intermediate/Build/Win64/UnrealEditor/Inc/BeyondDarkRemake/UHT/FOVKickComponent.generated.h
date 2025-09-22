// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FOVKickComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEYONDDARKREMAKE_FOVKickComponent_generated_h
#error "FOVKickComponent.generated.h already included, missing '#pragma once' in FOVKickComponent.h"
#endif
#define BEYONDDARKREMAKE_FOVKickComponent_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSprinting);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFOVKickComponent(); \
	friend struct Z_Construct_UClass_UFOVKickComponent_Statics; \
public: \
	DECLARE_CLASS(UFOVKickComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UFOVKickComponent)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFOVKickComponent(UFOVKickComponent&&); \
	UFOVKickComponent(const UFOVKickComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFOVKickComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFOVKickComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFOVKickComponent) \
	NO_API virtual ~UFOVKickComponent();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_12_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UFOVKickComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
