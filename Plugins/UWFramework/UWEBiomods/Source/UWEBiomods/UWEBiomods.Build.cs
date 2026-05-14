using UnrealBuildTool;

public class UWEBiomods : ModuleRules {
    public UWEBiomods(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "ModelViewViewModel",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWECommonUI",
            "UWEDialogue",
            "UWEGameplay",
            "UWEImGui",
            "UWEInterfaces",
            "UWERangeTracker",
            "UWESaveSystem",
            "UWEUnlockables",
        });
    }
}
