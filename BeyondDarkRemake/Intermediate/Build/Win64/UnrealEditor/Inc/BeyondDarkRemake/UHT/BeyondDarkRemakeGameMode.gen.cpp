// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeyondDarkRemake/BeyondDarkRemakeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeyondDarkRemakeGameMode() {}

// Begin Cross Module References
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_ABeyondDarkRemakeGameMode();
BEYONDDARKREMAKE_API UClass* Z_Construct_UClass_ABeyondDarkRemakeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BeyondDarkRemake();
// End Cross Module References

// Begin Class ABeyondDarkRemakeGameMode
void ABeyondDarkRemakeGameMode::StaticRegisterNativesABeyondDarkRemakeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABeyondDarkRemakeGameMode);
UClass* Z_Construct_UClass_ABeyondDarkRemakeGameMode_NoRegister()
{
	return ABeyondDarkRemakeGameMode::StaticClass();
}
struct Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BeyondDarkRemakeGameMode.h" },
		{ "ModuleRelativePath", "BeyondDarkRemakeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeyondDarkRemakeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BeyondDarkRemake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::ClassParams = {
	&ABeyondDarkRemakeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABeyondDarkRemakeGameMode()
{
	if (!Z_Registration_Info_UClass_ABeyondDarkRemakeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABeyondDarkRemakeGameMode.OuterSingleton, Z_Construct_UClass_ABeyondDarkRemakeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABeyondDarkRemakeGameMode.OuterSingleton;
}
template<> BEYONDDARKREMAKE_API UClass* StaticClass<ABeyondDarkRemakeGameMode>()
{
	return ABeyondDarkRemakeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABeyondDarkRemakeGameMode);
ABeyondDarkRemakeGameMode::~ABeyondDarkRemakeGameMode() {}
// End Class ABeyondDarkRemakeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABeyondDarkRemakeGameMode, ABeyondDarkRemakeGameMode::StaticClass, TEXT("ABeyondDarkRemakeGameMode"), &Z_Registration_Info_UClass_ABeyondDarkRemakeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABeyondDarkRemakeGameMode), 90371275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeGameMode_h_3952099298(TEXT("/Script/BeyondDarkRemake"),
	Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BeyondDarkRemake_Source_BeyondDarkRemake_BeyondDarkRemakeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
