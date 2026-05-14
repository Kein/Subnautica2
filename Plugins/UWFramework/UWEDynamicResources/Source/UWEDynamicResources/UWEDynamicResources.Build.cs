using UnrealBuildTool;

public class UWEDynamicResources : ModuleRules {
    public UWEDynamicResources(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEEquipment",
        });
    }
}
