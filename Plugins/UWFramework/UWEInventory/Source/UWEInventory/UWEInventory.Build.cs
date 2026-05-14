using UnrealBuildTool;

public class UWEInventory : ModuleRules {
    public UWEInventory(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "NetCore",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEEventTracker",
            "UWEImGui",
            "UWEInterfaces",
            "UWEPhysics",
            "UWESaveSystem",
            "UWEStoryGoals",
            "UWEVolumeTracker",
        });
    }
}
