using UnrealBuildTool;

public class UWETrigger : ModuleRules {
    public UWETrigger(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "GameplayAbilities",
            "GameplayTags",
            "LevelSequence",
            "UWEAssetRegistry",
            "UWEDialogue",
            "UWEInterfaces",
            "UWESaveSystem",
            "UWEStoryGoals",
        });
    }
}
