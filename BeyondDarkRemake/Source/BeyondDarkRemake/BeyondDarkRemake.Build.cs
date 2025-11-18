// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BeyondDarkRemake : ModuleRules
{
	public BeyondDarkRemake(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "NavigationSystem", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
