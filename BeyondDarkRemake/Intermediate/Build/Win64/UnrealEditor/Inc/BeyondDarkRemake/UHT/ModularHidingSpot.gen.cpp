// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/ModularHidingSpot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularHidingSpot() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_AModularHidingSpot();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_AModularHidingSpot_NoRegister();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_UHidingSpotComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class AModularHidingSpot
void AModularHidingSpot::StaticRegisterNativesAModularHidingSpot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularHidingSpot);
UClass* Z_Construct_UClass_AModularHidingSpot_NoRegister()
{
	return AModularHidingSpot::StaticClass();
}
struct Z_Construct_UClass_AModularHidingSpot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModularHidingSpot.h" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Hiding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerMesh_MetaData[] = {
		{ "Category", "Hiding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The static mesh (locker/chest) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The static mesh (locker/chest)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Hiding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The door/lid mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The door/lid mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[] = {
		{ "Category", "Hiding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry & Exit helper points */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry & Exit helper points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitPoint_MetaData[] = {
		{ "Category", "Hiding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HidingSpot_MetaData[] = {
		{ "Category", "Hiding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ModularHidingSpot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HidingSpot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularHidingSpot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_ContainerMesh = { "ContainerMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, ContainerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerMesh_MetaData), NewProp_ContainerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, EntryPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryPoint_MetaData), NewProp_EntryPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_ExitPoint = { "ExitPoint", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, ExitPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitPoint_MetaData), NewProp_ExitPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_HidingSpot = { "HidingSpot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularHidingSpot, HidingSpot), Z_Construct_UClass_UHidingSpotComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HidingSpot_MetaData), NewProp_HidingSpot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularHidingSpot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_ContainerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_EntryPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_ExitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularHidingSpot_Statics::NewProp_HidingSpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularHidingSpot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularHidingSpot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularHidingSpot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularHidingSpot_Statics::ClassParams = {
	&AModularHidingSpot::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AModularHidingSpot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularHidingSpot_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularHidingSpot_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularHidingSpot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularHidingSpot()
{
	if (!Z_Registration_Info_UClass_AModularHidingSpot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularHidingSpot.OuterSingleton, Z_Construct_UClass_AModularHidingSpot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularHidingSpot.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<AModularHidingSpot>()
{
	return AModularHidingSpot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularHidingSpot);
AModularHidingSpot::~AModularHidingSpot() {}
// End Class AModularHidingSpot

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_ModularHidingSpot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularHidingSpot, AModularHidingSpot::StaticClass, TEXT("AModularHidingSpot"), &Z_Registration_Info_UClass_AModularHidingSpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularHidingSpot), 3938675280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_ModularHidingSpot_h_2204283486(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_ModularHidingSpot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_ModularHidingSpot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
