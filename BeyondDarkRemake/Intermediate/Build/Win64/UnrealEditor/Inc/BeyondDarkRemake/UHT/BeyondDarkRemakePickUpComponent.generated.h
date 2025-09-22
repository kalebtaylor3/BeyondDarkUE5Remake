// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BeyondDarkRemakePickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABeyondDarkRemakeCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BEYONDDARKREMAKE_BeyondDarkRemakePickUpComponent_generated_h
#error "BeyondDarkRemakePickUpComponent.generated.h already included, missing '#pragma once' in BeyondDarkRemakePickUpComponent.h"
#endif
#define BEYONDDARKREMAKE_BeyondDarkRemakePickUpComponent_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_12_DELEGATE \
BEYONDDARKREMAKE_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ABeyondDarkRemakeCharacter* PickUpCharacter);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBeyondDarkRemakePickUpComponent(); \
	friend struct Z_Construct_UClass_UBeyondDarkRemakePickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UBeyondDarkRemakePickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UBeyondDarkRemakePickUpComponent)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBeyondDarkRemakePickUpComponent(UBeyondDarkRemakePickUpComponent&&); \
	UBeyondDarkRemakePickUpComponent(const UBeyondDarkRemakePickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeyondDarkRemakePickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeyondDarkRemakePickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBeyondDarkRemakePickUpComponent) \
	NO_API virtual ~UBeyondDarkRemakePickUpComponent();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_14_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UBeyondDarkRemakePickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakePickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
