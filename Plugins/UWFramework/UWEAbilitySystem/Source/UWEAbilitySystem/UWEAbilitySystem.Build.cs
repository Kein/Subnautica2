using UnrealBuildTool;

public class UWEAbilitySystem : ModuleRules {
    public UWEAbilitySystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "UWEAssetRegistry",
            "UWEChildActor",
            "UWEImGui",
            "UWEInterfaces",
            "UWESaveSystem",
            "UWEVolumeTracker",
        });
    }
}
