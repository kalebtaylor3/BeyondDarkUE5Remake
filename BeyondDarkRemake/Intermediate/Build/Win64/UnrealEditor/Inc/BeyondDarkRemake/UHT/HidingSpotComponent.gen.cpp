// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/HidingSpotComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHidingSpotComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHidingSpotComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHidingSpotComponent_NoRegister();
BEYONDDARKREMAKE_API UEnum* Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput();
BEYONDDARKREMAKE_API UEnum* Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType();
BEYONDDARKREMAKE_API UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature();
BEYONDDARKREMAKE_API UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature();
BEYONDDARKREMAKE_API UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Enum EHidingDoorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHidingDoorType;
static UEnum* EHidingDoorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHidingDoorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHidingDoorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType, (UObject*)Z_Construct_UPackage__Script_BeyondDarkRemake(), TEXT("EHidingDoorType"));
	}
	return Z_Registration_Info_UEnum_EHidingDoorType.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UEnum* StaticEnum<EHidingDoorType>()
{
	return EHidingDoorType_StaticEnum();
}
struct Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hinged.DisplayName", "Hinged" },
		{ "Hinged.Name", "EHidingDoorType::Hinged" },
		{ "Lid.DisplayName", "Lid" },
		{ "Lid.Name", "EHidingDoorType::Lid" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EHidingDoorType::None" },
		{ "Sliding.DisplayName", "Sliding" },
		{ "Sliding.Name", "EHidingDoorType::Sliding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHidingDoorType::None", (int64)EHidingDoorType::None },
		{ "EHidingDoorType::Hinged", (int64)EHidingDoorType::Hinged },
		{ "EHidingDoorType::Sliding", (int64)EHidingDoorType::Sliding },
		{ "EHidingDoorType::Lid", (int64)EHidingDoorType::Lid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
	nullptr,
	"EHidingDoorType",
	"EHidingDoorType",
	Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType()
{
	if (!Z_Registration_Info_UEnum_EHidingDoorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHidingDoorType.InnerSingleton, Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHidingDoorType.InnerSingleton;
}
// End Enum EHidingDoorType

// Begin Enum EDoorOpenInput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorOpenInput;
static UEnum* EDoorOpenInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorOpenInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorOpenInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput, (UObject*)Z_Construct_UPackage__Script_BeyondDarkRemake(), TEXT("EDoorOpenInput"));
	}
	return Z_Registration_Info_UEnum_EDoorOpenInput.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UEnum* StaticEnum<EDoorOpenInput>()
{
	return EDoorOpenInput_StaticEnum();
}
struct Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Forward.DisplayName", "Forward (W)" },
		{ "Forward.Name", "EDoorOpenInput::Forward" },
		{ "Left.DisplayName", "Left (A)" },
		{ "Left.Name", "EDoorOpenInput::Left" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
		{ "Right.DisplayName", "Right (D)" },
		{ "Right.Name", "EDoorOpenInput::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorOpenInput::Forward", (int64)EDoorOpenInput::Forward },
		{ "EDoorOpenInput::Right", (int64)EDoorOpenInput::Right },
		{ "EDoorOpenInput::Left", (int64)EDoorOpenInput::Left },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
	nullptr,
	"EDoorOpenInput",
	"EDoorOpenInput",
	Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput()
{
	if (!Z_Registration_Info_UEnum_EDoorOpenInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorOpenInput.InnerSingleton, Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorOpenInput.InnerSingleton;
}
// End Enum EDoorOpenInput

// Begin Delegate FOnHidingEnter
struct Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics
{
	struct _Script_BeyondDarkRemake_eventOnHidingEnter_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BeyondDarkRemake_eventOnHidingEnter_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake, nullptr, "OnHidingEnter__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnHidingEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnHidingEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHidingEnter_DelegateWrapper(const FMulticastScriptDelegate& OnHidingEnter, APawn* Pawn)
{
	struct _Script_BeyondDarkRemake_eventOnHidingEnter_Parms
	{
		APawn* Pawn;
	};
	_Script_BeyondDarkRemake_eventOnHidingEnter_Parms Parms;
	Parms.Pawn=Pawn;
	OnHidingEnter.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHidingEnter

// Begin Delegate FOnHidingExit
struct Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics
{
	struct _Script_BeyondDarkRemake_eventOnHidingExit_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BeyondDarkRemake_eventOnHidingExit_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake, nullptr, "OnHidingExit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnHidingExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnHidingExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHidingExit_DelegateWrapper(const FMulticastScriptDelegate& OnHidingExit, APawn* Pawn)
{
	struct _Script_BeyondDarkRemake_eventOnHidingExit_Parms
	{
		APawn* Pawn;
	};
	_Script_BeyondDarkRemake_eventOnHidingExit_Parms Parms;
	Parms.Pawn=Pawn;
	OnHidingExit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHidingExit

// Begin Delegate FOnDoorTargetChanged
struct Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics
{
	struct _Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms
	{
		float TargetAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::NewProp_TargetAlpha = { "TargetAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms, TargetAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::NewProp_TargetAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BeyondDarkRemake, nullptr, "OnDoorTargetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::_Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoorTargetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDoorTargetChanged, float TargetAlpha)
{
	struct _Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms
	{
		float TargetAlpha;
	};
	_Script_BeyondDarkRemake_eventOnDoorTargetChanged_Parms Parms;
	Parms.TargetAlpha=TargetAlpha;
	OnDoorTargetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDoorTargetChanged

// Begin Class UHidingSpotComponent Function BeginDoorManipulation
struct Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics
{
	struct HidingSpotComponent_eventBeginDoorManipulation_Parms
	{
		APawn* ByPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// API\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ByPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::NewProp_ByPawn = { "ByPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventBeginDoorManipulation_Parms, ByPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::NewProp_ByPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "BeginDoorManipulation", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::HidingSpotComponent_eventBeginDoorManipulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::HidingSpotComponent_eventBeginDoorManipulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execBeginDoorManipulation)
{
	P_GET_OBJECT(APawn,Z_Param_ByPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginDoorManipulation(Z_Param_ByPawn);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function BeginDoorManipulation

// Begin Class UHidingSpotComponent Function CanEnter
struct Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics
{
	struct HidingSpotComponent_eventCanEnter_Parms
	{
		APawn* Pawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is it safe/allowed to enter now? */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is it safe/allowed to enter now?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventCanEnter_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventCanEnter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventCanEnter_Parms), &Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "CanEnter", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::HidingSpotComponent_eventCanEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::HidingSpotComponent_eventCanEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_CanEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_CanEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execCanEnter)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnter(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function CanEnter

// Begin Class UHidingSpotComponent Function DriveDoorAxis
struct Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics
{
	struct HidingSpotComponent_eventDriveDoorAxis_Parms
	{
		float Axis;
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventDriveDoorAxis_Parms, Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventDriveDoorAxis_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "DriveDoorAxis", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::HidingSpotComponent_eventDriveDoorAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::HidingSpotComponent_eventDriveDoorAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execDriveDoorAxis)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DriveDoorAxis(Z_Param_Axis,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function DriveDoorAxis

// Begin Class UHidingSpotComponent Function DriveDoorWhileHidden
struct Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics
{
	struct HidingSpotComponent_eventDriveDoorWhileHidden_Parms
	{
		float Axis;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drive door by a single scalar axis while hidden (Axis in [-1,1])\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drive door by a single scalar axis while hidden (Axis in [-1,1])" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventDriveDoorWhileHidden_Parms, Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventDriveDoorWhileHidden_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "DriveDoorWhileHidden", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::HidingSpotComponent_eventDriveDoorWhileHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::HidingSpotComponent_eventDriveDoorWhileHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execDriveDoorWhileHidden)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DriveDoorWhileHidden(Z_Param_Axis,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function DriveDoorWhileHidden

// Begin Class UHidingSpotComponent Function EndDoorManipulation
struct Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Axis in [-1,1]\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Axis in [-1,1]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "EndDoorManipulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execEndDoorManipulation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDoorManipulation();
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function EndDoorManipulation

// Begin Class UHidingSpotComponent Function Enter
struct Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics
{
	struct HidingSpotComponent_eventEnter_Parms
	{
		APawn* Pawn;
		bool bAutoClose;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Begin hiding sequence (snaps pawn, closes door if desired) */" },
#endif
		{ "CPP_Default_bAutoClose", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin hiding sequence (snaps pawn, closes door if desired)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static void NewProp_bAutoClose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoClose;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventEnter_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_bAutoClose_SetBit(void* Obj)
{
	((HidingSpotComponent_eventEnter_Parms*)Obj)->bAutoClose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_bAutoClose = { "bAutoClose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventEnter_Parms), &Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_bAutoClose_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventEnter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventEnter_Parms), &Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_bAutoClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "Enter", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::HidingSpotComponent_eventEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::HidingSpotComponent_eventEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_Enter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_Enter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execEnter)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_UBOOL(Z_Param_bAutoClose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Enter(Z_Param_Pawn,Z_Param_bAutoClose);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function Enter

// Begin Class UHidingSpotComponent Function Exit
struct Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics
{
	struct HidingSpotComponent_eventExit_Parms
	{
		bool bAutoOpen;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exit sequence */" },
#endif
		{ "CPP_Default_bAutoOpen", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exit sequence" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoOpen;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_bAutoOpen_SetBit(void* Obj)
{
	((HidingSpotComponent_eventExit_Parms*)Obj)->bAutoOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_bAutoOpen = { "bAutoOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventExit_Parms), &Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_bAutoOpen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventExit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventExit_Parms), &Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_bAutoOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "Exit", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::HidingSpotComponent_eventExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::HidingSpotComponent_eventExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_Exit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_Exit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execExit)
{
	P_GET_UBOOL(Z_Param_bAutoOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Exit(Z_Param_bAutoOpen);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function Exit

// Begin Class UHidingSpotComponent Function ForceExit
struct Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics
{
	struct HidingSpotComponent_eventForceExit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forces release even if locked (use with care) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces release even if locked (use with care)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventForceExit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventForceExit_Parms), &Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "ForceExit", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::HidingSpotComponent_eventForceExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::HidingSpotComponent_eventForceExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_ForceExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_ForceExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execForceExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ForceExit();
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function ForceExit

// Begin Class UHidingSpotComponent Function GetPeekForPawn
struct Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics
{
	struct HidingSpotComponent_eventGetPeekForPawn_Parms
	{
		APawn* Pawn;
		FVector OutLocalOffset;
		float OutYawAddDegrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Peek" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutYawAddDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventGetPeekForPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_OutLocalOffset = { "OutLocalOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventGetPeekForPawn_Parms, OutLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_OutYawAddDegrees = { "OutYawAddDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventGetPeekForPawn_Parms, OutYawAddDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_OutLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::NewProp_OutYawAddDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "GetPeekForPawn", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::HidingSpotComponent_eventGetPeekForPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::HidingSpotComponent_eventGetPeekForPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execGetPeekForPawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalOffset);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutYawAddDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPeekForPawn(Z_Param_Pawn,Z_Param_Out_OutLocalOffset,Z_Param_Out_OutYawAddDegrees);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function GetPeekForPawn

// Begin Class UHidingSpotComponent Function OpenTo
struct Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics
{
	struct HidingSpotComponent_eventOpenTo_Parms
	{
		float Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Command a new target alpha [0..1] */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Command a new target alpha [0..1]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventOpenTo_Parms, Target), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "OpenTo", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::HidingSpotComponent_eventOpenTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::HidingSpotComponent_eventOpenTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_OpenTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_OpenTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execOpenTo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenTo(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function OpenTo

// Begin Class UHidingSpotComponent Function SnapClosedFromCurrent
#if WITH_EDITOR
struct Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Hiding|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Quick helpers while setting up: capture the current local as CLOSED/OPEN refs */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick helpers while setting up: capture the current local as CLOSED/OPEN refs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "SnapClosedFromCurrent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UHidingSpotComponent::execSnapClosedFromCurrent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapClosedFromCurrent();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UHidingSpotComponent Function SnapClosedFromCurrent

// Begin Class UHidingSpotComponent Function SnapOpenFromCurrent
#if WITH_EDITOR
struct Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Hiding|Editor" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "SnapOpenFromCurrent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UHidingSpotComponent::execSnapOpenFromCurrent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapOpenFromCurrent();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UHidingSpotComponent Function SnapOpenFromCurrent

// Begin Class UHidingSpotComponent Function StartAutoEnter
struct Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics
{
	struct HidingSpotComponent_eventStartAutoEnter_Parms
	{
		APawn* Pawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tap-to-hide glide\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tap-to-hide glide" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HidingSpotComponent_eventStartAutoEnter_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventStartAutoEnter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventStartAutoEnter_Parms), &Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "StartAutoEnter", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::HidingSpotComponent_eventStartAutoEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::HidingSpotComponent_eventStartAutoEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execStartAutoEnter)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartAutoEnter(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function StartAutoEnter

// Begin Class UHidingSpotComponent Function StartAutoExit
struct Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics
{
	struct HidingSpotComponent_eventStartAutoExit_Parms
	{
		bool bAlsoOpenDoor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
		{ "CPP_Default_bAlsoOpenDoor", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAlsoOpenDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlsoOpenDoor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_bAlsoOpenDoor_SetBit(void* Obj)
{
	((HidingSpotComponent_eventStartAutoExit_Parms*)Obj)->bAlsoOpenDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_bAlsoOpenDoor = { "bAlsoOpenDoor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventStartAutoExit_Parms), &Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_bAlsoOpenDoor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HidingSpotComponent_eventStartAutoExit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HidingSpotComponent_eventStartAutoExit_Parms), &Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_bAlsoOpenDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "StartAutoExit", nullptr, nullptr, Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::HidingSpotComponent_eventStartAutoExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::HidingSpotComponent_eventStartAutoExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execStartAutoExit)
{
	P_GET_UBOOL(Z_Param_bAlsoOpenDoor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartAutoExit(Z_Param_bAlsoOpenDoor);
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function StartAutoExit

// Begin Class UHidingSpotComponent Function ToggleOpen
struct Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tries to toggle (close->open / open->close) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to toggle (close->open / open->close)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHidingSpotComponent, nullptr, "ToggleOpen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHidingSpotComponent::execToggleOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleOpen();
	P_NATIVE_END;
}
// End Class UHidingSpotComponent Function ToggleOpen

// Begin Class UHidingSpotComponent
void UHidingSpotComponent::StaticRegisterNativesUHidingSpotComponent()
{
	UClass* Class = UHidingSpotComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginDoorManipulation", &UHidingSpotComponent::execBeginDoorManipulation },
		{ "CanEnter", &UHidingSpotComponent::execCanEnter },
		{ "DriveDoorAxis", &UHidingSpotComponent::execDriveDoorAxis },
		{ "DriveDoorWhileHidden", &UHidingSpotComponent::execDriveDoorWhileHidden },
		{ "EndDoorManipulation", &UHidingSpotComponent::execEndDoorManipulation },
		{ "Enter", &UHidingSpotComponent::execEnter },
		{ "Exit", &UHidingSpotComponent::execExit },
		{ "ForceExit", &UHidingSpotComponent::execForceExit },
		{ "GetPeekForPawn", &UHidingSpotComponent::execGetPeekForPawn },
		{ "OpenTo", &UHidingSpotComponent::execOpenTo },
#if WITH_EDITOR
		{ "SnapClosedFromCurrent", &UHidingSpotComponent::execSnapClosedFromCurrent },
		{ "SnapOpenFromCurrent", &UHidingSpotComponent::execSnapOpenFromCurrent },
#endif // WITH_EDITOR
		{ "StartAutoEnter", &UHidingSpotComponent::execStartAutoEnter },
		{ "StartAutoExit", &UHidingSpotComponent::execStartAutoExit },
		{ "ToggleOpen", &UHidingSpotComponent::execToggleOpen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHidingSpotComponent);
UClass* Z_Construct_UClass_UHidingSpotComponent_NoRegister()
{
	return UHidingSpotComponent::StaticClass();
}
struct Z_Construct_UClass_UHidingSpotComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BeyondDark" },
		{ "IncludePath", "HidingSpotComponent.h" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryPointRef_MetaData[] = {
		{ "Category", "Hiding|Setup" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitPointRef_MetaData[] = {
		{ "Category", "Hiding|Setup" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorRef_MetaData[] = {
		{ "Category", "Hiding|Door" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Resolved pointers (runtime, not editable) ----\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Resolved pointers (runtime, not editable) ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement type for the \xef\xbf\xbd""door\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement type for the \xef\xbf\xbd""door\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideOffsetLocal_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-space open pose for the door (interpreted depending on DoorType) */" },
#endif
		{ "EditCondition", "DoorType==EHidingDoorType::Sliding" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-space open pose for the door (interpreted depending on DoorType)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenRotationLocal_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For Hinged/Lid: degrees of rotation when fully open (positive or negative ok) */" },
#endif
		{ "EditCondition", "DoorType==EHidingDoorType::Hinged || DoorType==EHidingDoorType::Lid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Hinged/Lid: degrees of rotation when fully open (positive or negative ok)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSpeed_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Door animation speed (alpha per second) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door animation speed (alpha per second)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional easing curve for door alpha [0..1] */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional easing curve for door alpha [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinOpenToEnter_MetaData[] = {
		{ "Category", "Hiding|Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum open alpha required to allow entering */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum open alpha required to allow entering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Hiding|Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lock prevents opening/closing and entering/exiting (except forced) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lock prevents opening/closing and entering/exiting (except forced)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePawnMovementInside_MetaData[] = {
		{ "Category", "Hiding|Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, we\xef\xbf\xbdll temporarily disable the pawn\xef\xbf\xbds movement when inside */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, we\xef\xbf\xbdll temporarily disable the pawn\xef\xbf\xbds movement when inside" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkPawnAsHiddenForAI_MetaData[] = {
		{ "Category", "Hiding|Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, we\xef\xbf\xbdll make the pawn harder to detect (AI integrations left to you) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, we\xef\xbf\xbdll make the pawn harder to detect (AI integrations left to you)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAlpha_MetaData[] = {
		{ "Category", "Hiding|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current open [0..1] */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current open [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "Hiding|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if occupied */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if occupied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occupant_MetaData[] = {
		{ "Category", "Hiding|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Who\xef\xbf\xbds inside (if any) */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who\xef\xbf\xbds inside (if any)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSmoothExit_MetaData[] = {
		{ "Category", "Hiding|Exit" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExitDuration_MetaData[] = {
		{ "Category", "Hiding|Exit" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExitEase_MetaData[] = {
		{ "Category", "Hiding|Exit" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTargetOpenAlpha_MetaData[] = {
		{ "Category", "Hiding|Exit" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How open the door should be while exiting (0..1). 1 = fully open. */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How open the door should be while exiting (0..1). 1 = fully open." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitDoorHoldTime_MetaData[] = {
		{ "Category", "Hiding|Exit" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keep the door from relaxing for a short time after exit completes. */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep the door from relaxing for a short time after exit completes." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnter_MetaData[] = {
		{ "Category", "Hiding|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint events */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExit_MetaData[] = {
		{ "Category", "Hiding|Events" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorTargetChanged_MetaData[] = {
		{ "Category", "Hiding|Events" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenInputMode_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Config you can tune per spot ----\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Config you can tune per spot ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDeadzone_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ignore tiny stick/keyboard noise */" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore tiny stick/keyboard noise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorDriveSpeed_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Outlast-style control & auto-enter options ---\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Outlast-style control & auto-enter options ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorRelaxCloseSpeed_MetaData[] = {
		{ "Category", "Hiding|Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// alpha/sec when you \"push\" the door\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "alpha/sec when you \"push\" the door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoEnterDuration_MetaData[] = {
		{ "Category", "Hiding|Enter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// alpha/sec back toward closed when released\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "alpha/sec back toward closed when released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoEnterEase_MetaData[] = {
		{ "Category", "Hiding|Enter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// seconds to glide into the spot\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seconds to glide into the spot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekMaxDistance_MetaData[] = {
		{ "Category", "Hiding|Peek" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekYawMaxDegrees_MetaData[] = {
		{ "Category", "Hiding|Peek" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to yaw the camera (look past the door) at full open\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to yaw the camera (look past the door) at full open" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekCurve_MetaData[] = {
		{ "Category", "Hiding|Peek" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatPointRef_MetaData[] = {
		{ "Category", "Hiding|Setup" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekDirBasisRef_MetaData[] = {
		{ "Category", "Hiding|Peek" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional: use this as the basis for peek direction; if unset we use DoorComponent (fallback Root)\n" },
#endif
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: use this as the basis for peek direction; if unset we use DoorComponent (fallback Root)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatPoint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resolved at runtime (not editable)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolved at runtime (not editable)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeekDirBasis_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HidingSpotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryPointRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitPointRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlideOffsetLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenRotationLocal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOpenToEnter;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static void NewProp_bDisablePawnMovementInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePawnMovementInside;
	static void NewProp_bMarkPawnAsHiddenForAI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkPawnAsHiddenForAI;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAlpha;
	static void NewProp_bIsOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Occupant;
	static void NewProp_bUseSmoothExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSmoothExit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExitDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoExitEase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitTargetOpenAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitDoorHoldTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorTargetChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpenInputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenInputMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputDeadzone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorDriveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorRelaxCloseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoEnterDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoEnterEase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeekMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeekYawMaxDegrees;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PeekCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeatPointRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeekDirBasisRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PeekDirBasis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHidingSpotComponent_BeginDoorManipulation, "BeginDoorManipulation" }, // 3659585522
		{ &Z_Construct_UFunction_UHidingSpotComponent_CanEnter, "CanEnter" }, // 1421159603
		{ &Z_Construct_UFunction_UHidingSpotComponent_DriveDoorAxis, "DriveDoorAxis" }, // 124251240
		{ &Z_Construct_UFunction_UHidingSpotComponent_DriveDoorWhileHidden, "DriveDoorWhileHidden" }, // 3469444792
		{ &Z_Construct_UFunction_UHidingSpotComponent_EndDoorManipulation, "EndDoorManipulation" }, // 27955270
		{ &Z_Construct_UFunction_UHidingSpotComponent_Enter, "Enter" }, // 697671534
		{ &Z_Construct_UFunction_UHidingSpotComponent_Exit, "Exit" }, // 1462218694
		{ &Z_Construct_UFunction_UHidingSpotComponent_ForceExit, "ForceExit" }, // 3623052641
		{ &Z_Construct_UFunction_UHidingSpotComponent_GetPeekForPawn, "GetPeekForPawn" }, // 2651734005
		{ &Z_Construct_UFunction_UHidingSpotComponent_OpenTo, "OpenTo" }, // 4274210128
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UHidingSpotComponent_SnapClosedFromCurrent, "SnapClosedFromCurrent" }, // 3095179587
		{ &Z_Construct_UFunction_UHidingSpotComponent_SnapOpenFromCurrent, "SnapOpenFromCurrent" }, // 2047005337
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UHidingSpotComponent_StartAutoEnter, "StartAutoEnter" }, // 898901779
		{ &Z_Construct_UFunction_UHidingSpotComponent_StartAutoExit, "StartAutoExit" }, // 547998346
		{ &Z_Construct_UFunction_UHidingSpotComponent_ToggleOpen, "ToggleOpen" }, // 3617890139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHidingSpotComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_EntryPointRef = { "EntryPointRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, EntryPointRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryPointRef_MetaData), NewProp_EntryPointRef_MetaData) }; // 3869904073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitPointRef = { "ExitPointRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, ExitPointRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitPointRef_MetaData), NewProp_ExitPointRef_MetaData) }; // 3869904073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorRef = { "DoorRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorRef_MetaData), NewProp_DoorRef_MetaData) }; // 3869904073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, EntryPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryPoint_MetaData), NewProp_EntryPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitPoint = { "ExitPoint", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, ExitPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitPoint_MetaData), NewProp_ExitPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorComponent = { "DoorComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorComponent_MetaData), NewProp_DoorComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorType), Z_Construct_UEnum_BeyondDarkRemake_EHidingDoorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) }; // 723507413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SlideOffsetLocal = { "SlideOffsetLocal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, SlideOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideOffsetLocal_MetaData), NewProp_SlideOffsetLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenRotationLocal = { "OpenRotationLocal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OpenRotationLocal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenRotationLocal_MetaData), NewProp_OpenRotationLocal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorSpeed = { "DoorSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSpeed_MetaData), NewProp_DoorSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorCurve = { "DoorCurve", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorCurve_MetaData), NewProp_DoorCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_MinOpenToEnter = { "MinOpenToEnter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, MinOpenToEnter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinOpenToEnter_MetaData), NewProp_MinOpenToEnter_MetaData) };
void Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((UHidingSpotComponent*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHidingSpotComponent), &Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
void Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bDisablePawnMovementInside_SetBit(void* Obj)
{
	((UHidingSpotComponent*)Obj)->bDisablePawnMovementInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bDisablePawnMovementInside = { "bDisablePawnMovementInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHidingSpotComponent), &Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bDisablePawnMovementInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePawnMovementInside_MetaData), NewProp_bDisablePawnMovementInside_MetaData) };
void Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bMarkPawnAsHiddenForAI_SetBit(void* Obj)
{
	((UHidingSpotComponent*)Obj)->bMarkPawnAsHiddenForAI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bMarkPawnAsHiddenForAI = { "bMarkPawnAsHiddenForAI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHidingSpotComponent), &Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bMarkPawnAsHiddenForAI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkPawnAsHiddenForAI_MetaData), NewProp_bMarkPawnAsHiddenForAI_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenAlpha = { "OpenAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OpenAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAlpha_MetaData), NewProp_OpenAlpha_MetaData) };
void Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
{
	((UHidingSpotComponent*)Obj)->bIsOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHidingSpotComponent), &Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOccupied_MetaData), NewProp_bIsOccupied_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_Occupant = { "Occupant", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, Occupant), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occupant_MetaData), NewProp_Occupant_MetaData) };
void Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bUseSmoothExit_SetBit(void* Obj)
{
	((UHidingSpotComponent*)Obj)->bUseSmoothExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bUseSmoothExit = { "bUseSmoothExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHidingSpotComponent), &Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bUseSmoothExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSmoothExit_MetaData), NewProp_bUseSmoothExit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoExitDuration = { "AutoExitDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, AutoExitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExitDuration_MetaData), NewProp_AutoExitDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoExitEase = { "AutoExitEase", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, AutoExitEase), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExitEase_MetaData), NewProp_AutoExitEase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitTargetOpenAlpha = { "ExitTargetOpenAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, ExitTargetOpenAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTargetOpenAlpha_MetaData), NewProp_ExitTargetOpenAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitDoorHoldTime = { "ExitDoorHoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, ExitDoorHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitDoorHoldTime_MetaData), NewProp_ExitDoorHoldTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnEnter = { "OnEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OnEnter), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnter_MetaData), NewProp_OnEnter_MetaData) }; // 340474871
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnExit = { "OnExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OnExit), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnHidingExit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExit_MetaData), NewProp_OnExit_MetaData) }; // 1602752124
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnDoorTargetChanged = { "OnDoorTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OnDoorTargetChanged), Z_Construct_UDelegateFunction_BeyondDarkRemake_OnDoorTargetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoorTargetChanged_MetaData), NewProp_OnDoorTargetChanged_MetaData) }; // 3496082190
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenInputMode = { "OpenInputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, OpenInputMode), Z_Construct_UEnum_BeyondDarkRemake_EDoorOpenInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenInputMode_MetaData), NewProp_OpenInputMode_MetaData) }; // 2693072755
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_InputDeadzone = { "InputDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, InputDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDeadzone_MetaData), NewProp_InputDeadzone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorDriveSpeed = { "DoorDriveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorDriveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorDriveSpeed_MetaData), NewProp_DoorDriveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorRelaxCloseSpeed = { "DoorRelaxCloseSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, DoorRelaxCloseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorRelaxCloseSpeed_MetaData), NewProp_DoorRelaxCloseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoEnterDuration = { "AutoEnterDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, AutoEnterDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoEnterDuration_MetaData), NewProp_AutoEnterDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoEnterEase = { "AutoEnterEase", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, AutoEnterEase), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoEnterEase_MetaData), NewProp_AutoEnterEase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekMaxDistance = { "PeekMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, PeekMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekMaxDistance_MetaData), NewProp_PeekMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekYawMaxDegrees = { "PeekYawMaxDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, PeekYawMaxDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekYawMaxDegrees_MetaData), NewProp_PeekYawMaxDegrees_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekCurve = { "PeekCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, PeekCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekCurve_MetaData), NewProp_PeekCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SeatPointRef = { "SeatPointRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, SeatPointRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatPointRef_MetaData), NewProp_SeatPointRef_MetaData) }; // 3869904073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekDirBasisRef = { "PeekDirBasisRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, PeekDirBasisRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekDirBasisRef_MetaData), NewProp_PeekDirBasisRef_MetaData) }; // 3869904073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SeatPoint = { "SeatPoint", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, SeatPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatPoint_MetaData), NewProp_SeatPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekDirBasis = { "PeekDirBasis", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHidingSpotComponent, PeekDirBasis), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeekDirBasis_MetaData), NewProp_PeekDirBasis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHidingSpotComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_EntryPointRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitPointRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_EntryPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SlideOffsetLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenRotationLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_MinOpenToEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bDisablePawnMovementInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bMarkPawnAsHiddenForAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bIsOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_Occupant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_bUseSmoothExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoExitDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoExitEase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitTargetOpenAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_ExitDoorHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OnDoorTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenInputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_OpenInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_InputDeadzone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorDriveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_DoorRelaxCloseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoEnterDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_AutoEnterEase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekYawMaxDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SeatPointRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekDirBasisRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_SeatPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHidingSpotComponent_Statics::NewProp_PeekDirBasis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHidingSpotComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHidingSpotComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHidingSpotComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHidingSpotComponent_Statics::ClassParams = {
	&UHidingSpotComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHidingSpotComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHidingSpotComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHidingSpotComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHidingSpotComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHidingSpotComponent()
{
	if (!Z_Registration_Info_UClass_UHidingSpotComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHidingSpotComponent.OuterSingleton, Z_Construct_UClass_UHidingSpotComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHidingSpotComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UHidingSpotComponent>()
{
	return UHidingSpotComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHidingSpotComponent);
UHidingSpotComponent::~UHidingSpotComponent() {}
// End Class UHidingSpotComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHidingDoorType_StaticEnum, TEXT("EHidingDoorType"), &Z_Registration_Info_UEnum_EHidingDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 723507413U) },
		{ EDoorOpenInput_StaticEnum, TEXT("EDoorOpenInput"), &Z_Registration_Info_UEnum_EDoorOpenInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2693072755U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHidingSpotComponent, UHidingSpotComponent::StaticClass, TEXT("UHidingSpotComponent"), &Z_Registration_Info_UClass_UHidingSpotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHidingSpotComponent), 1400264773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_725803497(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HidingSpotComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
