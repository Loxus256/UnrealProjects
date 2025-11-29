// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PortfolioMultiproj : ModuleRules
{
	public PortfolioMultiproj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
            //"SlateCore"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PortfolioMultiproj",
			"PortfolioMultiproj/Variant_Platforming",
			"PortfolioMultiproj/Variant_Platforming/Animation",
			"PortfolioMultiproj/Variant_Combat",
			"PortfolioMultiproj/Variant_Combat/AI",
			"PortfolioMultiproj/Variant_Combat/Animation",
			"PortfolioMultiproj/Variant_Combat/Gameplay",
			"PortfolioMultiproj/Variant_Combat/Interfaces",
			"PortfolioMultiproj/Variant_Combat/UI",
			"PortfolioMultiproj/Variant_SideScrolling",
			"PortfolioMultiproj/Variant_SideScrolling/AI",
			"PortfolioMultiproj/Variant_SideScrolling/Gameplay",
			"PortfolioMultiproj/Variant_SideScrolling/Interfaces",
			"PortfolioMultiproj/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
