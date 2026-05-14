using UnrealBuildTool;

public class UWEPingSystem : ModuleRules {
    public UWEPingSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "UWEAssetRegistry",
            "UWEInterfaces",
            "UWESaveSystem",
            "UWESpawnSystems",
        });
    }
}
