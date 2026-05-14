using UnrealBuildTool;

public class UWECrafting : ModuleRules {
    public UWECrafting(ReadOnlyTargetRules Target) : base(Target) {
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
            "UWEDialogue",
            "UWEInterfaces",
            "UWEInventory",
            "UWERangeTracker",
            "UWESaveSystem",
            "UWEStoryGoals",
            "UWEUnlockables",
        });
    }
}
