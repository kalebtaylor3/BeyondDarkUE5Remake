// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/HideableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideableCharacter() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHideableCharacter();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHideableCharacter_NoRegister();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHidingSpotComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Interface UHideableCharacter Function OnEnterHiding
struct HideableCharacter_eventOnEnterHiding_Parms
{
	UHidingSpotComponent* Spot;
};
void IHideableCharacter::OnEnterHiding(UHidingSpotComponent* Spot)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterHiding instead.");
}
static FName NAME_UHideableCharacter_OnEnterHiding = FName(TEXT("OnEnterHiding"));
void IHideableCharacter::Execute_OnEnterHiding(UObject* O, UHidingSpotComponent* Spot)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()));
	HideableCharacter_eventOnEnterHiding_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHideableCharacter_OnEnterHiding);
	if (Func)
	{
		Parms.Spot=Spot;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHideableCharacter*)(O->GetNativeInterfaceAddress(UHideableCharacter::StaticClass())))
	{
		I->OnEnterHiding_Implementation(Spot);
	}
}
struct Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after the pawn has been snapped inside a hiding spot */" },
#endif
		{ "ModuleRelativePath", "HideableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after the pawn has been snapped inside a hiding spot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::NewProp_Spot = { "Spot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HideableCharacter_eventOnEnterHiding_Parms, Spot), Z_Construct_UClass_UHidingSpotComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spot_MetaData), NewProp_Spot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::NewProp_Spot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideableCharacter, nullptr, "OnEnterHiding", nullptr, nullptr, Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::PropPointers), sizeof(HideableCharacter_eventOnEnterHiding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::Function_MetaDataParams) };
static_assert(sizeof(HideableCharacter_eventOnEnterHiding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHideableCharacter_OnEnterHiding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHideableCharacter_OnEnterHiding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHideableCharacter::execOnEnterHiding)
{
	P_GET_OBJECT(UHidingSpotComponent,Z_Param_Spot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnterHiding_Implementation(Z_Param_Spot);
	P_NATIVE_END;
}
// End Interface UHideableCharacter Function OnEnterHiding

// Begin Interface UHideableCharacter Function OnExitHiding
struct HideableCharacter_eventOnExitHiding_Parms
{
	UHidingSpotComponent* Spot;
};
void IHideableCharacter::OnExitHiding(UHidingSpotComponent* Spot)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitHiding instead.");
}
static FName NAME_UHideableCharacter_OnExitHiding = FName(TEXT("OnExitHiding"));
void IHideableCharacter::Execute_OnExitHiding(UObject* O, UHidingSpotComponent* Spot)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()));
	HideableCharacter_eventOnExitHiding_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHideableCharacter_OnExitHiding);
	if (Func)
	{
		Parms.Spot=Spot;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHideableCharacter*)(O->GetNativeInterfaceAddress(UHideableCharacter::StaticClass())))
	{
		I->OnExitHiding_Implementation(Spot);
	}
}
struct Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hiding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called right before the pawn is released from the hiding spot */" },
#endif
		{ "ModuleRelativePath", "HideableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called right before the pawn is released from the hiding spot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::NewProp_Spot = { "Spot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HideableCharacter_eventOnExitHiding_Parms, Spot), Z_Construct_UClass_UHidingSpotComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spot_MetaData), NewProp_Spot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::NewProp_Spot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideableCharacter, nullptr, "OnExitHiding", nullptr, nullptr, Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::PropPointers), sizeof(HideableCharacter_eventOnExitHiding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::Function_MetaDataParams) };
static_assert(sizeof(HideableCharacter_eventOnExitHiding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHideableCharacter_OnExitHiding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHideableCharacter_OnExitHiding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHideableCharacter::execOnExitHiding)
{
	P_GET_OBJECT(UHidingSpotComponent,Z_Param_Spot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitHiding_Implementation(Z_Param_Spot);
	P_NATIVE_END;
}
// End Interface UHideableCharacter Function OnExitHiding

// Begin Interface UHideableCharacter
void UHideableCharacter::StaticRegisterNativesUHideableCharacter()
{
	UClass* Class = UHideableCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnterHiding", &IHideableCharacter::execOnEnterHiding },
		{ "OnExitHiding", &IHideableCharacter::execOnExitHiding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHideableCharacter);
UClass* Z_Construct_UClass_UHideableCharacter_NoRegister()
{
	return UHideableCharacter::StaticClass();
}
struct Z_Construct_UClass_UHideableCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HideableCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHideableCharacter_OnEnterHiding, "OnEnterHiding" }, // 805900582
		{ &Z_Construct_UFunction_UHideableCharacter_OnExitHiding, "OnExitHiding" }, // 910856663
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHideableCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHideableCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHideableCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHideableCharacter_Statics::ClassParams = {
	&UHideableCharacter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHideableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHideableCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHideableCharacter()
{
	if (!Z_Registration_Info_UClass_UHideableCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHideableCharacter.OuterSingleton, Z_Construct_UClass_UHideableCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHideableCharacter.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UHideableCharacter>()
{
	return UHideableCharacter::StaticClass();
}
UHideableCharacter::UHideableCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHideableCharacter);
UHideableCharacter::~UHideableCharacter() {}
// End Interface UHideableCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHideableCharacter, UHideableCharacter::StaticClass, TEXT("UHideableCharacter"), &Z_Registration_Info_UClass_UHideableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHideableCharacter), 2457040371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_2900320450(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_HideableCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
