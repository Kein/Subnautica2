using UnrealBuildTool;

public class UWEStimulusSystem : ModuleRules {
    public UWEStimulusSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEMath",
        });
    }
}
