// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/StickyMovementInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStickyMovementInputComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UStickyMovementInputComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UStickyMovementInputComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class UStickyMovementInputComponent Function UpdateAndGetSmoothed
struct Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics
{
	struct StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms
	{
		FVector2D RawInput;
		float DeltaTime;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sticky" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_RawInput = { "RawInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms, RawInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawInput_MetaData), NewProp_RawInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_RawInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStickyMovementInputComponent, nullptr, "UpdateAndGetSmoothed", nullptr, nullptr, Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::StickyMovementInputComponent_eventUpdateAndGetSmoothed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStickyMovementInputComponent::execUpdateAndGetSmoothed)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RawInput);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->UpdateAndGetSmoothed(Z_Param_Out_RawInput,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UStickyMovementInputComponent Function UpdateAndGetSmoothed

// Begin Class UStickyMovementInputComponent
void UStickyMovementInputComponent::StaticRegisterNativesUStickyMovementInputComponent()
{
	UClass* Class = UStickyMovementInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAndGetSmoothed", &UStickyMovementInputComponent::execUpdateAndGetSmoothed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStickyMovementInputComponent);
UClass* Z_Construct_UClass_UStickyMovementInputComponent_NoRegister()
{
	return UStickyMovementInputComponent::StaticClass();
}
struct Z_Construct_UClass_UStickyMovementInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "StickyMovementInputComponent.h" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelRate_MetaData[] = {
		{ "Category", "Sticky" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelRate_MetaData[] = {
		{ "Category", "Sticky" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelAlphaCurve_MetaData[] = {
		{ "Category", "Sticky" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shapes per-frame alpha (0..1 -> 0..1)\n" },
#endif
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shapes per-frame alpha (0..1 -> 0..1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelAlphaCurve_MetaData[] = {
		{ "Category", "Sticky" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopEpsilon_MetaData[] = {
		{ "Category", "Sticky" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "StickyMovementInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccelAlphaCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecelAlphaCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopEpsilon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStickyMovementInputComponent_UpdateAndGetSmoothed, "UpdateAndGetSmoothed" }, // 138473652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStickyMovementInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_AccelRate = { "AccelRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStickyMovementInputComponent, AccelRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelRate_MetaData), NewProp_AccelRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_DecelRate = { "DecelRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStickyMovementInputComponent, DecelRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelRate_MetaData), NewProp_DecelRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_AccelAlphaCurve = { "AccelAlphaCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStickyMovementInputComponent, AccelAlphaCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelAlphaCurve_MetaData), NewProp_AccelAlphaCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_DecelAlphaCurve = { "DecelAlphaCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStickyMovementInputComponent, DecelAlphaCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelAlphaCurve_MetaData), NewProp_DecelAlphaCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_StopEpsilon = { "StopEpsilon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStickyMovementInputComponent, StopEpsilon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopEpsilon_MetaData), NewProp_StopEpsilon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStickyMovementInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_AccelRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_DecelRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_AccelAlphaCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_DecelAlphaCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStickyMovementInputComponent_Statics::NewProp_StopEpsilon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStickyMovementInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStickyMovementInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStickyMovementInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStickyMovementInputComponent_Statics::ClassParams = {
	&UStickyMovementInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStickyMovementInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStickyMovementInputComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStickyMovementInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStickyMovementInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStickyMovementInputComponent()
{
	if (!Z_Registration_Info_UClass_UStickyMovementInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStickyMovementInputComponent.OuterSingleton, Z_Construct_UClass_UStickyMovementInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStickyMovementInputComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UStickyMovementInputComponent>()
{
	return UStickyMovementInputComponent::StaticClass();
}
UStickyMovementInputComponent::UStickyMovementInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStickyMovementInputComponent);
UStickyMovementInputComponent::~UStickyMovementInputComponent() {}
// End Class UStickyMovementInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStickyMovementInputComponent, UStickyMovementInputComponent::StaticClass, TEXT("UStickyMovementInputComponent"), &Z_Registration_Info_UClass_UStickyMovementInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStickyMovementInputComponent), 3002805815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_1090269600(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_StickyMovementInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
