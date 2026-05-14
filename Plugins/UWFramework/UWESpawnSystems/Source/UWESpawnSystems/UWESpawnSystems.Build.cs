using UnrealBuildTool;

public class UWESpawnSystems : ModuleRules {
    public UWESpawnSystems(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "UWESaveSystem",
            "UWEUtilities",
        });
    }
}
