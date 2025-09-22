// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HidingSpotComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef BEYONDDARKREMAKE_HidingSpotComponent_generated_h
#error "HidingSpotComponent.generated.h already included, missing '#pragma once' in HidingSpotComponent.h"
#endif
#define BEYONDDARKREMAKE_HidingSpotComponent_generated_h

#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_27_DELEGATE \
BEYONDDARKREMAKE_API void FOnHidingEnter_DelegateWrapper(const FMulticastScriptDelegate& OnHidingEnter, APawn* Pawn);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_28_DELEGATE \
BEYONDDARKREMAKE_API void FOnHidingExit_DelegateWrapper(const FMulticastScriptDelegate& OnHidingExit, APawn* Pawn);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_29_DELEGATE \
BEYONDDARKREMAKE_API void FOnDoorTargetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDoorTargetChanged, float TargetAlpha);


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndDoorManipulation); \
	DECLARE_FUNCTION(execDriveDoorAxis); \
	DECLARE_FUNCTION(execBeginDoorManipulation); \
	DECLARE_FUNCTION(execDriveDoorWhileHidden); \
	DECLARE_FUNCTION(execStartAutoEnter); \
	DECLARE_FUNCTION(execGetPeekForPawn); \
	DECLARE_FUNCTION(execStartAutoExit); \
	DECLARE_FUNCTION(execForceExit); \
	DECLARE_FUNCTION(execExit); \
	DECLARE_FUNCTION(execEnter); \
	DECLARE_FUNCTION(execCanEnter); \
	DECLARE_FUNCTION(execOpenTo); \
	DECLARE_FUNCTION(execToggleOpen);


#if WITH_EDITOR
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSnapOpenFromCurrent); \
	DECLARE_FUNCTION(execSnapClosedFromCurrent);
#else // WITH_EDITOR
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHidingSpotComponent(); \
	friend struct Z_Construct_UClass_UHidingSpotComponent_Statics; \
public: \
	DECLARE_CLASS(UHidingSpotComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BeyondDarkRemake"), NO_API) \
	DECLARE_SERIALIZER(UHidingSpotComponent)


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHidingSpotComponent(UHidingSpotComponent&&); \
	UHidingSpotComponent(const UHidingSpotComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHidingSpotComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHidingSpotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHidingSpotComponent) \
	NO_API virtual ~UHidingSpotComponent();


#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_31_PROLOG
#define FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEYONDDARKREMAKE_API UClass* StaticClass<class UHidingSpotComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h


#define FOREACH_ENUM_EHIDINGDOORTYPE(op) \
	op(EHidingDoorType::None) \
	op(EHidingDoorType::Hinged) \
	op(EHidingDoorType::Sliding) \
	op(EHidingDoorType::Lid) 

enum class EHidingDoorType : uint8;
template<> struct TIsUEnumClass<EHidingDoorType> { enum { Value = true }; };
template<> BEYONDDARKREMAKE_API UEnum* StaticEnum<EHidingDoorType>();

#define FOREACH_ENUM_EDOOROPENINPUT(op) \
	op(EDoorOpenInput::Forward) \
	op(EDoorOpenInput::Right) \
	op(EDoorOpenInput::Left) 

enum class EDoorOpenInput : uint8;
template<> struct TIsUEnumClass<EDoorOpenInput> { enum { Value = true }; };
template<> BEYONDDARKREMAKE_API UEnum* StaticEnum<EDoorOpenInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
