using UnrealBuildTool;

public class UWEComputerTextInterface : ModuleRules {
    public UWEComputerTextInterface(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "GameplayTags",
            "ModelViewViewModel",
            "UWEAssetRegistry",
            "UWECommonUI",
            "UWERangeTracker",
            "UWEStoryGoals",
        });
    }
}
