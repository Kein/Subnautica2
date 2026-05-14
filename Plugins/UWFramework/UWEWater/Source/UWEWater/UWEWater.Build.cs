using UnrealBuildTool;

public class UWEWater : ModuleRules {
    public UWEWater(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Niagara",
            "UWESky",
            "UWEVolumeTracker",
            "Water",
            "RenderCore",
            "Renderer",
            "RHI"
        });
    }
}
