// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/FOVKickComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFOVKickComponent() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UFOVKickComponent();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UFOVKickComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class UFOVKickComponent Function SetSprinting
struct Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics
{
	struct FOVKickComponent_eventSetSprinting_Parms
	{
		bool bNowSprinting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FOV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call from character when sprinting toggles */" },
#endif
		{ "ModuleRelativePath", "FOVKickComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call from character when sprinting toggles" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNowSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNowSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::NewProp_bNowSprinting_SetBit(void* Obj)
{
	((FOVKickComponent_eventSetSprinting_Parms*)Obj)->bNowSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::NewProp_bNowSprinting = { "bNowSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOVKickComponent_eventSetSprinting_Parms), &Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::NewProp_bNowSprinting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::NewProp_bNowSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFOVKickComponent, nullptr, "SetSprinting", nullptr, nullptr, Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::FOVKickComponent_eventSetSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::FOVKickComponent_eventSetSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFOVKickComponent_SetSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFOVKickComponent_SetSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFOVKickComponent::execSetSprinting)
{
	P_GET_UBOOL(Z_Param_bNowSprinting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSprinting(Z_Param_bNowSprinting);
	P_NATIVE_END;
}
// End Class UFOVKickComponent Function SetSprinting

// Begin Class UFOVKickComponent
void UFOVKickComponent::StaticRegisterNativesUFOVKickComponent()
{
	UClass* Class = UFOVKickComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSprinting", &UFOVKickComponent::execSetSprinting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFOVKickComponent);
UClass* Z_Construct_UClass_UFOVKickComponent_NoRegister()
{
	return UFOVKickComponent::StaticClass();
}
struct Z_Construct_UClass_UFOVKickComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "IncludePath", "FOVKickComponent.h" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "FOV" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFOVAdd_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseInSpeed_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutSpeed_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "FOVKickComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFOVAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseOutSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFOVKickComponent_SetSprinting, "SetSprinting" }, // 1675632619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFOVKickComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFOVKickComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFOVKickComponent, BaseFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFOV_MetaData), NewProp_BaseFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_SprintFOVAdd = { "SprintFOVAdd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFOVKickComponent, SprintFOVAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFOVAdd_MetaData), NewProp_SprintFOVAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_EaseInSpeed = { "EaseInSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFOVKickComponent, EaseInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseInSpeed_MetaData), NewProp_EaseInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_EaseOutSpeed = { "EaseOutSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFOVKickComponent, EaseOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseOutSpeed_MetaData), NewProp_EaseOutSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFOVKickComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_BaseFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_SprintFOVAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_EaseInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFOVKickComponent_Statics::NewProp_EaseOutSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFOVKickComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFOVKickComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFOVKickComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFOVKickComponent_Statics::ClassParams = {
	&UFOVKickComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFOVKickComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFOVKickComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFOVKickComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFOVKickComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFOVKickComponent()
{
	if (!Z_Registration_Info_UClass_UFOVKickComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFOVKickComponent.OuterSingleton, Z_Construct_UClass_UFOVKickComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFOVKickComponent.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UFOVKickComponent>()
{
	return UFOVKickComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFOVKickComponent);
UFOVKickComponent::~UFOVKickComponent() {}
// End Class UFOVKickComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFOVKickComponent, UFOVKickComponent::StaticClass, TEXT("UFOVKickComponent"), &Z_Registration_Info_UClass_UFOVKickComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFOVKickComponent), 788124358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_3261912741(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_FOVKickComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
