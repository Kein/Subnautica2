using UnrealBuildTool;

public class UWEStoryGoals : ModuleRules {
    public UWEStoryGoals(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "NetCore",
            "UWEAssetRegistry",
            "UWEDialogue",
            "UWESaveSystem",
            "UWEStoryEvents",
        });
    }
}
