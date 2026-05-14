using UnrealBuildTool;

public class UWEPower : ModuleRules {
    public UWEPower(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "UWEGlobalSimulation",
            "UWEImGui",
            "UWEInventory",
            "UWESaveSystem",
            "UWESpawnSystems",
        });
    }
}
