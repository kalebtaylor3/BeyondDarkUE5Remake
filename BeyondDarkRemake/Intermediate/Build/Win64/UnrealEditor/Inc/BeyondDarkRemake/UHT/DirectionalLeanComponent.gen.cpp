// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/DirectionalLeanComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLeanComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UDirectionalLeanCameraModifier_NoRegister();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UDirectionalLeanComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UDirectionalLeanComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class UDirectionalLeanComponent
void UDirectionalLeanComponent::StaticRegisterNativesUDirectionalLeanComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLeanComponent);
UClass* Z_Construct_UClass_UDirectionalLeanComponent_NoRegister()
{
	return UDirectionalLeanComponent::StaticClass();
}
struct Z_Construct_UClass_UDirectionalLeanComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "IncludePath", "DirectionalLeanComponent.h" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSpeed_MetaData[] = {
		{ "Category", "Lean|Tuning" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference speed (cm/s) for normalization\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference speed (cm/s) for normalization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMoveSpeed_MetaData[] = {
		{ "Category", "Lean|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Idle gating with hysteresis\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Idle gating with hysteresis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopMoveSpeed_MetaData[] = {
		{ "Category", "Lean|Tuning" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeStartThreshold_MetaData[] = {
		{ "Category", "Lean|Strafe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Strafe (roll) ----\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Strafe (roll) ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSustainRollDeg_MetaData[] = {
		{ "Category", "Lean|Strafe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm/s to trigger start impulse\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm/s to trigger start impulse" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeStartRollImpulseDeg_MetaData[] = {
		{ "Category", "Lean|Strafe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// sustained roll at full strafe\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sustained roll at full strafe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSustainInSpeed_MetaData[] = {
		{ "Category", "Lean|Strafe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// quick kick when you flip/start\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "quick kick when you flip/start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSustainOutSpeed_MetaData[] = {
		{ "Category", "Lean|Strafe" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeImpulseDamping_MetaData[] = {
		{ "Category", "Lean|Strafe" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeExponent_MetaData[] = {
		{ "Category", "Lean|Strafe" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackStartThreshold_MetaData[] = {
		{ "Category", "Lean|Back" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Backward (pitch) ----\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Backward (pitch) ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSustainPitchDownDeg_MetaData[] = {
		{ "Category", "Lean|Back" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackStartPitchDownImpulseDeg_MetaData[] = {
		{ "Category", "Lean|Back" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// down is negative pitch\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "down is negative pitch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSustainInSpeed_MetaData[] = {
		{ "Category", "Lean|Back" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSustainOutSpeed_MetaData[] = {
		{ "Category", "Lean|Back" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackImpulseDamping_MetaData[] = {
		{ "Category", "Lean|Back" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackExponent_MetaData[] = {
		{ "Category", "Lean|Back" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDominanceStart_MetaData[] = {
		{ "Category", "Lean|StrafeGate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much the movement must be \"sideways\" before roll engages\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much the movement must be \"sideways\" before roll engages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDominanceStop_MetaData[] = {
		{ "Category", "Lean|StrafeGate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// need 70% sideways to start\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "need 70% sideways to start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDominanceInterp_MetaData[] = {
		{ "Category", "Lean|StrafeGate" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fall back below 55%\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fall back below 55%" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeMinSpeed_MetaData[] = {
		{ "Category", "Lean|StrafeGate" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ignore tiny lateral speeds entirely\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore tiny lateral speeds entirely" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectRoll_MetaData[] = {
		{ "Category", "Lean|Axes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Master enables\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master enables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectPitch_MetaData[] = {
		{ "Category", "Lean|Axes" },
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mod_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We inject this into the PlayerCameraManager so we can add roll/pitch AFTER control rotation.\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We inject this into the PlayerCameraManager so we can add roll/pitch AFTER control rotation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeStartThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSustainRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeStartRollImpulseDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSustainInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSustainOutSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeImpulseDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackStartThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackSustainPitchDownDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackStartPitchDownImpulseDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackSustainInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackSustainOutSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackImpulseDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeDominanceStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeDominanceStop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeDominanceInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeMinSpeed;
	static void NewProp_bAffectRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectRoll;
	static void NewProp_bAffectPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectPitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLeanComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_ReferenceSpeed = { "ReferenceSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, ReferenceSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceSpeed_MetaData), NewProp_ReferenceSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StartMoveSpeed = { "StartMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StartMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMoveSpeed_MetaData), NewProp_StartMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StopMoveSpeed = { "StopMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StopMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopMoveSpeed_MetaData), NewProp_StopMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeStartThreshold = { "StrafeStartThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeStartThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeStartThreshold_MetaData), NewProp_StrafeStartThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainRollDeg = { "StrafeSustainRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeSustainRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSustainRollDeg_MetaData), NewProp_StrafeSustainRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeStartRollImpulseDeg = { "StrafeStartRollImpulseDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeStartRollImpulseDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeStartRollImpulseDeg_MetaData), NewProp_StrafeStartRollImpulseDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainInSpeed = { "StrafeSustainInSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeSustainInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSustainInSpeed_MetaData), NewProp_StrafeSustainInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainOutSpeed = { "StrafeSustainOutSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeSustainOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSustainOutSpeed_MetaData), NewProp_StrafeSustainOutSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeImpulseDamping = { "StrafeImpulseDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeImpulseDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeImpulseDamping_MetaData), NewProp_StrafeImpulseDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeExponent = { "StrafeExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeExponent_MetaData), NewProp_StrafeExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackStartThreshold = { "BackStartThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackStartThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackStartThreshold_MetaData), NewProp_BackStartThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainPitchDownDeg = { "BackSustainPitchDownDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackSustainPitchDownDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSustainPitchDownDeg_MetaData), NewProp_BackSustainPitchDownDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackStartPitchDownImpulseDeg = { "BackStartPitchDownImpulseDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackStartPitchDownImpulseDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackStartPitchDownImpulseDeg_MetaData), NewProp_BackStartPitchDownImpulseDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainInSpeed = { "BackSustainInSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackSustainInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSustainInSpeed_MetaData), NewProp_BackSustainInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainOutSpeed = { "BackSustainOutSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackSustainOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSustainOutSpeed_MetaData), NewProp_BackSustainOutSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackImpulseDamping = { "BackImpulseDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackImpulseDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackImpulseDamping_MetaData), NewProp_BackImpulseDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackExponent = { "BackExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, BackExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackExponent_MetaData), NewProp_BackExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceStart = { "StrafeDominanceStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeDominanceStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeDominanceStart_MetaData), NewProp_StrafeDominanceStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceStop = { "StrafeDominanceStop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeDominanceStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeDominanceStop_MetaData), NewProp_StrafeDominanceStop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceInterp = { "StrafeDominanceInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeDominanceInterp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeDominanceInterp_MetaData), NewProp_StrafeDominanceInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeMinSpeed = { "StrafeMinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, StrafeMinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeMinSpeed_MetaData), NewProp_StrafeMinSpeed_MetaData) };
void Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectRoll_SetBit(void* Obj)
{
	((UDirectionalLeanComponent*)Obj)->bAffectRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectRoll = { "bAffectRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDirectionalLeanComponent), &Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectRoll_MetaData), NewProp_bAffectRoll_MetaData) };
void Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectPitch_SetBit(void* Obj)
{
	((UDirectionalLeanComponent*)Obj)->bAffectPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectPitch = { "bAffectPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDirectionalLeanComponent), &Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectPitch_MetaData), NewProp_bAffectPitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanComponent, Mod), Z_Construct_UClass_UDirectionalLeanCameraModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mod_MetaData), NewProp_Mod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLeanComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_ReferenceSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StartMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StopMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeStartThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeStartRollImpulseDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeSustainOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeImpulseDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackStartThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainPitchDownDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackStartPitchDownImpulseDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackSustainOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackImpulseDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_BackExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeDominanceInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_StrafeMinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_bAffectPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanComponent_Statics::NewProp_Mod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDirectionalLeanComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLeanComponent_Statics::ClassParams = {
	&UDirectionalLeanComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDirectionalLeanComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDirectionalLeanComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDirectionalLeanComponent()
{
	if (!Z_Registration_Info_UClass_UDirectionalLeanComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLeanComponent.OuterSingleton, Z_Construct_UClass_UDirectionalLeanComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDirectionalLeanComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UDirectionalLeanComponent>()
{
	return UDirectionalLeanComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLeanComponent);
UDirectionalLeanComponent::~UDirectionalLeanComponent() {}
// End Class UDirectionalLeanComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalLeanComponent, UDirectionalLeanComponent::StaticClass, TEXT("UDirectionalLeanComponent"), &Z_Registration_Info_UClass_UDirectionalLeanComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLeanComponent), 1043756591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanComponent_h_282796236(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
