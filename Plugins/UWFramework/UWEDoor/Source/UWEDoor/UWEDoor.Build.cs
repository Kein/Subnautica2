using UnrealBuildTool;

public class UWEDoor : ModuleRules {
    public UWEDoor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "UWEGameplay",
            "UWELock",
            "UWESaveSystem",
            "UWEStoryGoals",
        });
    }
}
