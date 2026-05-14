using UnrealBuildTool;

public class UWELock : ModuleRules {
    public UWELock(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "UWEDialogue",
            "UWESaveSystem",
            "UWEStoryGoals",
        });
    }
}
