using UnrealBuildTool;

public class UWEEdgeOfWorld : ModuleRules {
    public UWEEdgeOfWorld(ReadOnlyTargetRules Target) : base(Target) {
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
            "UWESpline",
            "UWEVolumeTracker",
        });
    }
}
