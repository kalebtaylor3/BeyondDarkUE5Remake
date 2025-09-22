// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/FirstPersonBobComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonBobComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UFirstPersonBobComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UFirstPersonBobComponent_NoRegister();
BEYONDDARKREMAKE_API UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Delegate FOnFootstep
struct Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake, nullptr, "OnFootstep__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFootstep_DelegateWrapper(const FMulticastScriptDelegate& OnFootstep)
{
	OnFootstep.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFootstep

// Begin Class UFirstPersonBobComponent
void UFirstPersonBobComponent::StaticRegisterNativesUFirstPersonBobComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirstPersonBobComponent);
UClass* Z_Construct_UClass_UFirstPersonBobComponent_NoRegister()
{
	return UFirstPersonBobComponent::StaticClass();
}
struct Z_Construct_UClass_UFirstPersonBobComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "IncludePath", "FirstPersonBobComponent.h" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Refs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Refs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultForward_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultStrafe_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultBackward_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultCrouch_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAlpha_MetaData[] = {
		{ "Category", "Bob|External" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0 = fully standing, 1 = fully crouched (set by character each tick)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = fully standing, 1 = fully crouched (set by character each tick)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDirMultToX_MetaData[] = {
		{ "Category", "Bob|DirMult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Optional) also scale fore/aft torso sway by direction, off by default\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) also scale fore/aft torso sway by direction, off by default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMultForward_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyDirMultToX" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMultStrafe_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyDirMultToX" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMultBackward_MetaData[] = {
		{ "Category", "Bob|DirMult" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyDirMultToX" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAmplitudeZ_MetaData[] = {
		{ "Category", "Bob|Walk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amplitudes (cm)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amplitudes (cm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAmplitudeX_MetaData[] = {
		{ "Category", "Bob|Walk" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleAmplitudeZ_MetaData[] = {
		{ "Category", "Bob|Idle" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinWalkHz_MetaData[] = {
		{ "Category", "Bob|Walk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Frequencies (steps/sec). Walk freq scales with speed; idle is fixed.\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequencies (steps/sec). Walk freq scales with speed; idle is fixed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkHz_MetaData[] = {
		{ "Category", "Bob|Walk" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleHz_MetaData[] = {
		{ "Category", "Bob|Idle" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSpeed_MetaData[] = {
		{ "Category", "Bob|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement/bob tuning\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement/bob tuning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedSmoothing_MetaData[] = {
		{ "Category", "Bob|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm/s for MaxWalkHz\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm/s for MaxWalkHz" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAlphaInterp_MetaData[] = {
		{ "Category", "Bob|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// low-pass speed\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "low-pass speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMoveSpeed_MetaData[] = {
		{ "Category", "Bob|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hysteresis to decide moving vs idle (in cm/s)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hysteresis to decide moving vs idle (in cm/s)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopMoveSpeed_MetaData[] = {
		{ "Category", "Bob|Tuning" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeRollDegrees_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple roll blend for visual weight\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple roll blend for visual weight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollInterpSpeed_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanMaxRollDeg_MetaData[] = {
		{ "Category", "Lean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Lean (strafing weight) =====\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Lean (strafing weight) =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanMaxYawDeg_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanMaxOffsetY_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanExponent_MetaData[] = {
		{ "Category", "Lean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanInSpeed_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanOutSpeed_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalBaseOffsetZ_MetaData[] = {
		{ "Category", "Bob|External" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extra base Z offset other systems can drive (e.g., crouch)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra base Z offset other systems can drive (e.g., crouch)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirChangeVelThreshold_MetaData[] = {
		{ "Category", "Lean|Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction-change \xef\xbf\xbdwhip\xef\xbf\xbd impulse\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction-change \xef\xbf\xbdwhip\xef\xbf\xbd impulse" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseRollDeg_MetaData[] = {
		{ "Category", "Lean|Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm/s\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm/s" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseYawDeg_MetaData[] = {
		{ "Category", "Lean|Impulse" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseOffsetY_MetaData[] = {
		{ "Category", "Lean|Impulse" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDamping_MetaData[] = {
		{ "Category", "Lean|Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanResponseCurve_MetaData[] = {
		{ "Category", "Lean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional curve to shape lean response (X = |lateralNorm| 0..1, Y = 0..1)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional curve to shape lean response (X = |lateralNorm| 0..1, Y = 0..1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFootstep_MetaData[] = {
		{ "Category", "Bob|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Step events only when actually \xef\xbf\xbdwalking\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Step events only when actually \xef\xbf\xbdwalking\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAmpExponent_MetaData[] = {
		{ "Category", "Bob|SpeedResponse" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Bob speed response (how amplitudes grow with speed) ---\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Bob speed response (how amplitudes grow with speed) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardBiasInStride_MetaData[] = {
		{ "Category", "Bob|SpeedResponse" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward vs. strafe contribution to step rate (0=strfe-only, 1=forward-only)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward vs. strafe contribution to step rate (0=strfe-only, 1=forward-only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintGateStartFraction_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Sprint controls ---\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Sprint controls ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintGateFullFraction_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd ReferenceSpeed where sprint boost starts\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd ReferenceSpeed where sprint boost starts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFreqMultiplier_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplies the cadence during sprint (subtle goes a long way)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies the cadence during sprint (subtle goes a long way)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAmpX_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amplitude multipliers near full sprint (per-axis)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amplitude multipliers near full sprint (per-axis)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAmpY_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAmpZ_MetaData[] = {
		{ "Category", "Bob|Sprint" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSwayBaseScale_MetaData[] = {
		{ "Category", "Bob|Strafe" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Strafe sway controls (side-to-side bob separate from lean) ---\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Strafe sway controls (side-to-side bob separate from lean) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSwayMinFactor_MetaData[] = {
		{ "Category", "Bob|Strafe" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map StrafeNorm (0..1) -> sway factor in [Min..Max]\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map StrafeNorm (0..1) -> sway factor in [Min..Max]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSwayMaxFactor_MetaData[] = {
		{ "Category", "Bob|Strafe" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSwayPhaseDeg_MetaData[] = {
		{ "Category", "Bob|Strafe" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Phase offset for Y sway (deg) relative to vertical bob\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Phase offset for Y sway (deg) relative to vertical bob" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobZWave_MetaData[] = {
		{ "Category", "Bob|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Curve-shaped bob waves (0..1 phase -> approximately -1..1) =====\n// If null, we fall back to sine defaults.\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Curve-shaped bob waves (0..1 phase -> approximately -1..1) =====\nIf null, we fall back to sine defaults." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobXWave_MetaData[] = {
		{ "Category", "Bob|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// vertical\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "vertical" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobYSwayWave_MetaData[] = {
		{ "Category", "Bob|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fore/aft\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fore/aft" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseXDeg_MetaData[] = {
		{ "Category", "Bob|Wave" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional phase control for X (Y uses StrafeSwayPhaseDeg)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional phase control for X (Y uses StrafeSwayPhaseDeg)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpZBySpeed_MetaData[] = {
		{ "Category", "Bob|Amplitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Amplitude vs speed curves =====\n// speedNorm = SmoothedSpeed / ReferenceSpeed (0..1). If null, math fallback is used.\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Amplitude vs speed curves =====\nspeedNorm = SmoothedSpeed / ReferenceSpeed (0..1). If null, math fallback is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpXBySpeed_MetaData[] = {
		{ "Category", "Bob|Amplitude" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpYByStrafe_MetaData[] = {
		{ "Category", "Bob|Amplitude" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalBobStrength_MetaData[] = {
		{ "Category", "Bob|Amplitude" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick global scaler after curves\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick global scaler after curves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStepImpulse_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Optional step \"kick\" impulse on footfalls =====\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Optional step \"kick\" impulse on footfalls =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepKickZ_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepKickDamping_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Z impulse per step\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z impulse per step" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepPhaseA_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Two footfalls per cycle; tweak where in the 0..1 phase they land\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Two footfalls per cycle; tweak where in the 0..1 phase they land" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepPhaseB_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepKickSpeedScale_MetaData[] = {
		{ "Category", "Bob|StepImpulse" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How strongly speed affects the kick (0 = constant, 1 = scales with speedNorm)\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonBobComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How strongly speed affects the kick (0 = constant, 1 = scales with speedNorm)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultStrafe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultBackward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultCrouch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchAlpha;
	static void NewProp_bApplyDirMultToX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDirMultToX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XMultForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XMultStrafe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XMultBackward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkAmplitudeZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkAmplitudeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleAmplitudeZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWalkHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAlphaInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeRollDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanMaxRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanMaxYawDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanMaxOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanOutSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExternalBaseOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirChangeVelThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseYawDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseDamping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeanResponseCurve;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFootstep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedAmpExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardBiasInStride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintGateStartFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintGateFullFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFreqMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAmpX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAmpY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAmpZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSwayBaseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSwayMinFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSwayMaxFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSwayPhaseDeg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BobZWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BobXWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BobYSwayWave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseXDeg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmpZBySpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmpXBySpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmpYByStrafe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalBobStrength;
	static void NewProp_bEnableStepImpulse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStepImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepKickZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepKickDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepPhaseA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepPhaseB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepKickSpeedScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirstPersonBobComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultForward = { "ZMultForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ZMultForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultForward_MetaData), NewProp_ZMultForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultStrafe = { "ZMultStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ZMultStrafe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultStrafe_MetaData), NewProp_ZMultStrafe_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultBackward = { "ZMultBackward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ZMultBackward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultBackward_MetaData), NewProp_ZMultBackward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultCrouch = { "ZMultCrouch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ZMultCrouch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultCrouch_MetaData), NewProp_ZMultCrouch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_CrouchAlpha = { "CrouchAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, CrouchAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAlpha_MetaData), NewProp_CrouchAlpha_MetaData) };
void Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bApplyDirMultToX_SetBit(void* Obj)
{
	((UFirstPersonBobComponent*)Obj)->bApplyDirMultToX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bApplyDirMultToX = { "bApplyDirMultToX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFirstPersonBobComponent), &Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bApplyDirMultToX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDirMultToX_MetaData), NewProp_bApplyDirMultToX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultForward = { "XMultForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, XMultForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMultForward_MetaData), NewProp_XMultForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultStrafe = { "XMultStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, XMultStrafe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMultStrafe_MetaData), NewProp_XMultStrafe_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultBackward = { "XMultBackward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, XMultBackward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMultBackward_MetaData), NewProp_XMultBackward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_WalkAmplitudeZ = { "WalkAmplitudeZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, WalkAmplitudeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAmplitudeZ_MetaData), NewProp_WalkAmplitudeZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_WalkAmplitudeX = { "WalkAmplitudeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, WalkAmplitudeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAmplitudeX_MetaData), NewProp_WalkAmplitudeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_IdleAmplitudeZ = { "IdleAmplitudeZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, IdleAmplitudeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleAmplitudeZ_MetaData), NewProp_IdleAmplitudeZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MinWalkHz = { "MinWalkHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, MinWalkHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinWalkHz_MetaData), NewProp_MinWalkHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MaxWalkHz = { "MaxWalkHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, MaxWalkHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkHz_MetaData), NewProp_MaxWalkHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_IdleHz = { "IdleHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, IdleHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleHz_MetaData), NewProp_IdleHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ReferenceSpeed = { "ReferenceSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ReferenceSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceSpeed_MetaData), NewProp_ReferenceSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SpeedSmoothing = { "SpeedSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SpeedSmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedSmoothing_MetaData), NewProp_SpeedSmoothing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MoveAlphaInterp = { "MoveAlphaInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, MoveAlphaInterp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAlphaInterp_MetaData), NewProp_MoveAlphaInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StartMoveSpeed = { "StartMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StartMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMoveSpeed_MetaData), NewProp_StartMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StopMoveSpeed = { "StopMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StopMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopMoveSpeed_MetaData), NewProp_StopMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeRollDegrees = { "StrafeRollDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StrafeRollDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeRollDegrees_MetaData), NewProp_StrafeRollDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_RollInterpSpeed = { "RollInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, RollInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollInterpSpeed_MetaData), NewProp_RollInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxRollDeg = { "LeanMaxRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanMaxRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanMaxRollDeg_MetaData), NewProp_LeanMaxRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxYawDeg = { "LeanMaxYawDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanMaxYawDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanMaxYawDeg_MetaData), NewProp_LeanMaxYawDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxOffsetY = { "LeanMaxOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanMaxOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanMaxOffsetY_MetaData), NewProp_LeanMaxOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanExponent = { "LeanExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanExponent_MetaData), NewProp_LeanExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanInSpeed = { "LeanInSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanInSpeed_MetaData), NewProp_LeanInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanOutSpeed = { "LeanOutSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanOutSpeed_MetaData), NewProp_LeanOutSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ExternalBaseOffsetZ = { "ExternalBaseOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ExternalBaseOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalBaseOffsetZ_MetaData), NewProp_ExternalBaseOffsetZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_DirChangeVelThreshold = { "DirChangeVelThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, DirChangeVelThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirChangeVelThreshold_MetaData), NewProp_DirChangeVelThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseRollDeg = { "ImpulseRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ImpulseRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseRollDeg_MetaData), NewProp_ImpulseRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseYawDeg = { "ImpulseYawDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ImpulseYawDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseYawDeg_MetaData), NewProp_ImpulseYawDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseOffsetY = { "ImpulseOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ImpulseOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseOffsetY_MetaData), NewProp_ImpulseOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseDamping = { "ImpulseDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ImpulseDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseDamping_MetaData), NewProp_ImpulseDamping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanResponseCurve = { "LeanResponseCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, LeanResponseCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanResponseCurve_MetaData), NewProp_LeanResponseCurve_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_OnFootstep = { "OnFootstep", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, OnFootstep), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnFootstep__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFootstep_MetaData), NewProp_OnFootstep_MetaData) }; // 2675354107
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SpeedAmpExponent = { "SpeedAmpExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SpeedAmpExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedAmpExponent_MetaData), NewProp_SpeedAmpExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ForwardBiasInStride = { "ForwardBiasInStride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, ForwardBiasInStride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardBiasInStride_MetaData), NewProp_ForwardBiasInStride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintGateStartFraction = { "SprintGateStartFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintGateStartFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintGateStartFraction_MetaData), NewProp_SprintGateStartFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintGateFullFraction = { "SprintGateFullFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintGateFullFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintGateFullFraction_MetaData), NewProp_SprintGateFullFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintFreqMultiplier = { "SprintFreqMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintFreqMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFreqMultiplier_MetaData), NewProp_SprintFreqMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpX = { "SprintAmpX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintAmpX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAmpX_MetaData), NewProp_SprintAmpX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpY = { "SprintAmpY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintAmpY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAmpY_MetaData), NewProp_SprintAmpY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpZ = { "SprintAmpZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, SprintAmpZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAmpZ_MetaData), NewProp_SprintAmpZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayBaseScale = { "StrafeSwayBaseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StrafeSwayBaseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSwayBaseScale_MetaData), NewProp_StrafeSwayBaseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayMinFactor = { "StrafeSwayMinFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StrafeSwayMinFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSwayMinFactor_MetaData), NewProp_StrafeSwayMinFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayMaxFactor = { "StrafeSwayMaxFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StrafeSwayMaxFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSwayMaxFactor_MetaData), NewProp_StrafeSwayMaxFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayPhaseDeg = { "StrafeSwayPhaseDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StrafeSwayPhaseDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeSwayPhaseDeg_MetaData), NewProp_StrafeSwayPhaseDeg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobZWave = { "BobZWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, BobZWave), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobZWave_MetaData), NewProp_BobZWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobXWave = { "BobXWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, BobXWave), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobXWave_MetaData), NewProp_BobXWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobYSwayWave = { "BobYSwayWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, BobYSwayWave), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobYSwayWave_MetaData), NewProp_BobYSwayWave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_PhaseXDeg = { "PhaseXDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, PhaseXDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseXDeg_MetaData), NewProp_PhaseXDeg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpZBySpeed = { "AmpZBySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, AmpZBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpZBySpeed_MetaData), NewProp_AmpZBySpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpXBySpeed = { "AmpXBySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, AmpXBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpXBySpeed_MetaData), NewProp_AmpXBySpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpYByStrafe = { "AmpYByStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, AmpYByStrafe), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpYByStrafe_MetaData), NewProp_AmpYByStrafe_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_GlobalBobStrength = { "GlobalBobStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, GlobalBobStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalBobStrength_MetaData), NewProp_GlobalBobStrength_MetaData) };
void Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bEnableStepImpulse_SetBit(void* Obj)
{
	((UFirstPersonBobComponent*)Obj)->bEnableStepImpulse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bEnableStepImpulse = { "bEnableStepImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFirstPersonBobComponent), &Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bEnableStepImpulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStepImpulse_MetaData), NewProp_bEnableStepImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickZ = { "StepKickZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StepKickZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepKickZ_MetaData), NewProp_StepKickZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickDamping = { "StepKickDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StepKickDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepKickDamping_MetaData), NewProp_StepKickDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepPhaseA = { "StepPhaseA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StepPhaseA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepPhaseA_MetaData), NewProp_StepPhaseA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepPhaseB = { "StepPhaseB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StepPhaseB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepPhaseB_MetaData), NewProp_StepPhaseB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickSpeedScale = { "StepKickSpeedScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirstPersonBobComponent, StepKickSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepKickSpeedScale_MetaData), NewProp_StepKickSpeedScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirstPersonBobComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultBackward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ZMultCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_CrouchAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bApplyDirMultToX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_XMultBackward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_WalkAmplitudeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_WalkAmplitudeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_IdleAmplitudeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MinWalkHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MaxWalkHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_IdleHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ReferenceSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SpeedSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_MoveAlphaInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StartMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StopMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeRollDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_RollInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxYawDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanMaxOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ExternalBaseOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_DirChangeVelThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseYawDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ImpulseDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_LeanResponseCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_OnFootstep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SpeedAmpExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_ForwardBiasInStride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintGateStartFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintGateFullFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintFreqMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_SprintAmpZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayBaseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayMinFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayMaxFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StrafeSwayPhaseDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobZWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobXWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_BobYSwayWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_PhaseXDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpZBySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpXBySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_AmpYByStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_GlobalBobStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_bEnableStepImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepPhaseA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepPhaseB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirstPersonBobComponent_Statics::NewProp_StepKickSpeedScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonBobComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFirstPersonBobComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonBobComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirstPersonBobComponent_Statics::ClassParams = {
	&UFirstPersonBobComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFirstPersonBobComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonBobComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirstPersonBobComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirstPersonBobComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFirstPersonBobComponent()
{
	if (!Z_Registration_Info_UClass_UFirstPersonBobComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirstPersonBobComponent.OuterSingleton, Z_Construct_UClass_UFirstPersonBobComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFirstPersonBobComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UFirstPersonBobComponent>()
{
	return UFirstPersonBobComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFirstPersonBobComponent);
UFirstPersonBobComponent::~UFirstPersonBobComponent() {}
// End Class UFirstPersonBobComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FirstPersonBobComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFirstPersonBobComponent, UFirstPersonBobComponent::StaticClass, TEXT("UFirstPersonBobComponent"), &Z_Registration_Info_UClass_UFirstPersonBobComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirstPersonBobComponent), 3386386717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FirstPersonBobComponent_h_4047389467(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FirstPersonBobComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FirstPersonBobComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
