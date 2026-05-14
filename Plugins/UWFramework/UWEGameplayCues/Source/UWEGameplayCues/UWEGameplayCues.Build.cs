using UnrealBuildTool;

public class UWEGameplayCues : ModuleRules {
    public UWEGameplayCues(ReadOnlyTargetRules Target) : base(Target) {
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
            "NetCore",
            "Niagara",
            "PhysicsCore",
            "UMG",
            "UWEGameplay",
            "UWETickAggregation",
        });
    }
}
