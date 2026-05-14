using UnrealBuildTool;

public class UWEPhysics : ModuleRules {
    public UWEPhysics(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEInterfaces",
            "UWEVolumeTracker",
        });
    }
}
