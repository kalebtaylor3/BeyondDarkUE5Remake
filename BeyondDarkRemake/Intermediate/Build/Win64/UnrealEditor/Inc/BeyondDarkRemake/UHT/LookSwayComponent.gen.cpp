// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/LookSwayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookSwayComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_ULookSwayComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_ULookSwayComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class ULookSwayComponent Function AddLookInput
struct Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics
{
	struct LookSwayComponent_eventAddLookInput_Parms
	{
		FVector2D LookDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this from your Character::Look() each frame with the LookAction value\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this from your Character::Look() each frame with the LookAction value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::NewProp_LookDelta = { "LookDelta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LookSwayComponent_eventAddLookInput_Parms, LookDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookDelta_MetaData), NewProp_LookDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::NewProp_LookDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookSwayComponent, nullptr, "AddLookInput", nullptr, nullptr, Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::LookSwayComponent_eventAddLookInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::LookSwayComponent_eventAddLookInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULookSwayComponent_AddLookInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULookSwayComponent_AddLookInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULookSwayComponent::execAddLookInput)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LookDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLookInput(Z_Param_Out_LookDelta);
	P_NATIVE_END;
}
// End Class ULookSwayComponent Function AddLookInput

// Begin Class ULookSwayComponent
void ULookSwayComponent::StaticRegisterNativesULookSwayComponent()
{
	UClass* Class = ULookSwayComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLookInput", &ULookSwayComponent::execAddLookInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookSwayComponent);
UClass* Z_Construct_UClass_ULookSwayComponent_NoRegister()
{
	return ULookSwayComponent::StaticClass();
}
struct Z_Construct_UClass_ULookSwayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "IncludePath", "LookSwayComponent.h" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Refs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// References (auto-found in BeginPlay if not set)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References (auto-found in BeginPlay if not set)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRollDeg_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Magnitudes ===\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Magnitudes ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawDeg_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// tilt when moving mouse X\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tilt when moving mouse X" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchDeg_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// slight yaw lead/lag\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "slight yaw lead/lag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetY_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// tiny pitch from mouse Y\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tiny pitch from mouse Y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollPerLookX_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input?sway scales (per unit LookAction value)\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input?sway scales (per unit LookAction value)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawPerLookX_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchPerLookY_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetYPerLookX_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpeed_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inertia\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inertia" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutSpeed_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// lean in\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lean in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNoise_MetaData[] = {
		{ "Category", "Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional micro handheld noise\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional micro handheld noise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseRollDeg_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOffsetY_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseHzLow_MetaData[] = {
		{ "Category", "Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseHzHigh_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickThreshold_MetaData[] = {
		{ "Category", "Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction-change \xef\xbf\xbdwhip\xef\xbf\xbd impulse on rapid look reversals\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction-change \xef\xbf\xbdwhip\xef\xbf\xbd impulse on rapid look reversals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseRollDeg_MetaData[] = {
		{ "Category", "Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// look X delta magnitude to count as flick\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "look X delta magnitude to count as flick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseYawDeg_MetaData[] = {
		{ "Category", "Impulse" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDamping_MetaData[] = {
		{ "Category", "Impulse" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControlRotationDelta_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "LookSwayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefLookRateDegPerSec_MetaData[] = {
		{ "Category", "Sway" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normalize yaw/pitch rates (deg/sec) by this \xef\xbf\xbd""fast pan\xef\xbf\xbd reference\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalize yaw/pitch rates (deg/sec) by this \xef\xbf\xbd""fast pan\xef\xbf\xbd reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLookRateClamp_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clamp and shape\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp and shape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateExponent_MetaData[] = {
		{ "Category", "Sway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// don\xef\xbf\xbdt overreact to spikes\n" },
#endif
		{ "ModuleRelativePath", "LookSwayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "don\xef\xbf\xbdt overreact to spikes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollPerLookX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawPerLookX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchPerLookY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetYPerLookX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSpeed;
	static void NewProp_bEnableNoise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseHzLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseHzHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseRollDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseYawDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseDamping;
	static void NewProp_bUseControlRotationDelta_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControlRotationDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefLookRateDegPerSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLookRateClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULookSwayComponent_AddLookInput, "AddLookInput" }, // 1569578107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookSwayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxRollDeg = { "MaxRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, MaxRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRollDeg_MetaData), NewProp_MaxRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxYawDeg = { "MaxYawDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, MaxYawDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxYawDeg_MetaData), NewProp_MaxYawDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxPitchDeg = { "MaxPitchDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, MaxPitchDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchDeg_MetaData), NewProp_MaxPitchDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxOffsetY = { "MaxOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, MaxOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOffsetY_MetaData), NewProp_MaxOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RollPerLookX = { "RollPerLookX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, RollPerLookX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollPerLookX_MetaData), NewProp_RollPerLookX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_YawPerLookX = { "YawPerLookX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, YawPerLookX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawPerLookX_MetaData), NewProp_YawPerLookX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_PitchPerLookY = { "PitchPerLookY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, PitchPerLookY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchPerLookY_MetaData), NewProp_PitchPerLookY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_OffsetYPerLookX = { "OffsetYPerLookX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, OffsetYPerLookX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetYPerLookX_MetaData), NewProp_OffsetYPerLookX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, InSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpeed_MetaData), NewProp_InSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_OutSpeed = { "OutSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, OutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutSpeed_MetaData), NewProp_OutSpeed_MetaData) };
void Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bEnableNoise_SetBit(void* Obj)
{
	((ULookSwayComponent*)Obj)->bEnableNoise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bEnableNoise = { "bEnableNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULookSwayComponent), &Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bEnableNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNoise_MetaData), NewProp_bEnableNoise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseRollDeg = { "NoiseRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, NoiseRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseRollDeg_MetaData), NewProp_NoiseRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseOffsetY = { "NoiseOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, NoiseOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseOffsetY_MetaData), NewProp_NoiseOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseHzLow = { "NoiseHzLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, NoiseHzLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseHzLow_MetaData), NewProp_NoiseHzLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseHzHigh = { "NoiseHzHigh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, NoiseHzHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseHzHigh_MetaData), NewProp_NoiseHzHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_FlickThreshold = { "FlickThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, FlickThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickThreshold_MetaData), NewProp_FlickThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseRollDeg = { "ImpulseRollDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, ImpulseRollDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseRollDeg_MetaData), NewProp_ImpulseRollDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseYawDeg = { "ImpulseYawDeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, ImpulseYawDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseYawDeg_MetaData), NewProp_ImpulseYawDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseDamping = { "ImpulseDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, ImpulseDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseDamping_MetaData), NewProp_ImpulseDamping_MetaData) };
void Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bUseControlRotationDelta_SetBit(void* Obj)
{
	((ULookSwayComponent*)Obj)->bUseControlRotationDelta = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bUseControlRotationDelta = { "bUseControlRotationDelta", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULookSwayComponent), &Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bUseControlRotationDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControlRotationDelta_MetaData), NewProp_bUseControlRotationDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RefLookRateDegPerSec = { "RefLookRateDegPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, RefLookRateDegPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefLookRateDegPerSec_MetaData), NewProp_RefLookRateDegPerSec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxLookRateClamp = { "MaxLookRateClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, MaxLookRateClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLookRateClamp_MetaData), NewProp_MaxLookRateClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RateExponent = { "RateExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookSwayComponent, RateExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateExponent_MetaData), NewProp_RateExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookSwayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxYawDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxPitchDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RollPerLookX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_YawPerLookX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_PitchPerLookY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_OffsetYPerLookX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_InSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_OutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bEnableNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseHzLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_NoiseHzHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_FlickThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseRollDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseYawDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_ImpulseDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_bUseControlRotationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RefLookRateDegPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_MaxLookRateClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookSwayComponent_Statics::NewProp_RateExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookSwayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULookSwayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookSwayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookSwayComponent_Statics::ClassParams = {
	&ULookSwayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULookSwayComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULookSwayComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookSwayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookSwayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookSwayComponent()
{
	if (!Z_Registration_Info_UClass_ULookSwayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookSwayComponent.OuterSingleton, Z_Construct_UClass_ULookSwayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookSwayComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<ULookSwayComponent>()
{
	return ULookSwayComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookSwayComponent);
ULookSwayComponent::~ULookSwayComponent() {}
// End Class ULookSwayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_LookSwayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookSwayComponent, ULookSwayComponent::StaticClass, TEXT("ULookSwayComponent"), &Z_Registration_Info_UClass_ULookSwayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookSwayComponent), 4086773737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_LookSwayComponent_h_2347556637(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_LookSwayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_LookSwayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
