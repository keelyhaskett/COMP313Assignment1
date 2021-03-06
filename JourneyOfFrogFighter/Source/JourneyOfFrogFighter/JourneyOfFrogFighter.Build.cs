// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JourneyOfFrogFighter : ModuleRules
{
	public JourneyOfFrogFighter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Paper2D" });

		PublicDependencyModuleNames.AddRange(new string[] { });
	}
}
