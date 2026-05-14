using UnrealBuildTool;

public class UWECarryable : ModuleRules {
    public UWECarryable(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEInterfaces",
            "UWEInventory",
            "UWEPhysics",
            "UWESaveSystem",
            "UWEVolumeTracker",
        });
    }
}
