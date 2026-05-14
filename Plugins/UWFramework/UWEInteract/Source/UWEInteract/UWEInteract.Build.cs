using UnrealBuildTool;

public class UWEInteract : ModuleRules {
    public UWEInteract(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEImGui",
            "UWEInterfaces",
        });
    }
}
