using UnrealBuildTool;

public class UWEWorldPopulation2 : ModuleRules {
    public UWEWorldPopulation2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonLoadingScreen",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "Landscape",
            "UWEActorUID",
            "UWEAssetRegistry",
            "UWEBreakable",
            "UWEImGui",
            "UWEInterfaces",
            "UWESaveSystem",
            "UWEUtilities",
            "UWEVolumeTracker",
        });
    }
}
