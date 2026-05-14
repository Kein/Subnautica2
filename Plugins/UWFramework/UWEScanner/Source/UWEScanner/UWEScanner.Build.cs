using UnrealBuildTool;

public class UWEScanner : ModuleRules {
    public UWEScanner(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEActorUID",
            "UWEAssetRegistry",
            "UWEEventTracker",
            "UWEInventory",
            "UWESaveSystem",
            "UWEStoryGoals",
            "UWEUnlockables",
        });
    }
}
