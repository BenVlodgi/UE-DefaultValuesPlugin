// Copyright Dream Seed LLC, 2022

using UnrealBuildTool;

public class DefaultValues : ModuleRules
{
	public DefaultValues(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core" });
		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine" });
	}
}
