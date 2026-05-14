using UnrealBuildTool;

public class UWEGameplay : ModuleRules {
    public UWEGameplay(ReadOnlyTargetRules Target) : base(Target) {
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
            "UWEGameModeTypes",
            "UWESaveSystem",
        });
    }
}
