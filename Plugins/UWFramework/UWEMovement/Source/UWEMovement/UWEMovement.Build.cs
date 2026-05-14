using UnrealBuildTool;

public class UWEMovement : ModuleRules {
    public UWEMovement(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UWEImGui",
            "UWEInterfaces",
            "UWEVolumeTracker",
        });
    }
}
