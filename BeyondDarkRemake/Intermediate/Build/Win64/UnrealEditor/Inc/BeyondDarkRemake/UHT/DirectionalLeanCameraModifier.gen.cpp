// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/DirectionalLeanCameraModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLeanCameraModifier() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UDirectionalLeanCameraModifier();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UDirectionalLeanCameraModifier_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class UDirectionalLeanCameraModifier
void UDirectionalLeanCameraModifier::StaticRegisterNativesUDirectionalLeanCameraModifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLeanCameraModifier);
UClass* Z_Construct_UClass_UDirectionalLeanCameraModifier_NoRegister()
{
	return UDirectionalLeanCameraModifier::StaticClass();
}
struct Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runs inside PlayerCameraManager after control rotation.\n * We simply add pitch/roll to the final POV each frame.\n */" },
#endif
		{ "IncludePath", "DirectionalLeanCameraModifier.h" },
		{ "ModuleRelativePath", "DirectionalLeanCameraModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs inside PlayerCameraManager after control rotation.\nWe simply add pitch/roll to the final POV each frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddRot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set by your lean component each tick (degrees).\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanCameraModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set by your lean component each tick (degrees)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPriority_MetaData[] = {
		{ "Category", "Lean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep this high so we run late (after most modifiers).\n" },
#endif
		{ "ModuleRelativePath", "DirectionalLeanCameraModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep this high so we run late (after most modifiers)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddRot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLeanCameraModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::NewProp_AddRot = { "AddRot", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanCameraModifier, AddRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddRot_MetaData), NewProp_AddRot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::NewProp_DesiredPriority = { "DesiredPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLeanCameraModifier, DesiredPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredPriority_MetaData), NewProp_DesiredPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::NewProp_AddRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::NewProp_DesiredPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::ClassParams = {
	&UDirectionalLeanCameraModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDirectionalLeanCameraModifier()
{
	if (!Z_Registration_Info_UClass_UDirectionalLeanCameraModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLeanCameraModifier.OuterSingleton, Z_Construct_UClass_UDirectionalLeanCameraModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDirectionalLeanCameraModifier.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<UDirectionalLeanCameraModifier>()
{
	return UDirectionalLeanCameraModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLeanCameraModifier);
UDirectionalLeanCameraModifier::~UDirectionalLeanCameraModifier() {}
// End Class UDirectionalLeanCameraModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanCameraModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalLeanCameraModifier, UDirectionalLeanCameraModifier::StaticClass, TEXT("UDirectionalLeanCameraModifier"), &Z_Registration_Info_UClass_UDirectionalLeanCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLeanCameraModifier), 515000194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanCameraModifier_h_3228069559(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanCameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_DirectionalLeanCameraModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
