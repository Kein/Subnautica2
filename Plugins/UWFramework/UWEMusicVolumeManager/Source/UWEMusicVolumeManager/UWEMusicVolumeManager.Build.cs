using UnrealBuildTool;

public class UWEMusicVolumeManager : ModuleRules {
    public UWEMusicVolumeManager(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "UWEAssetRegistry",
            "UWEImGui",
            "UWEStoryGoals",
        });
    }
}
