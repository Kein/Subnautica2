using UnrealBuildTool;

public class UWEGlobalSimulation : ModuleRules {
    public UWEGlobalSimulation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UWEImGui",
            "UWESaveSystem",
            "UWEUtilities",
        });
    }
}
