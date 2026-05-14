using UnrealBuildTool;

public class UWEFarming : ModuleRules {
    public UWEFarming(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEBreakable",
            "UWEGameplay",
            "UWEImGui",
            "UWEInteract",
            "UWEInterfaces",
            "UWEInventory",
            "UWESaveSystem",
            "UWETickAggregation",
        });
    }
}
