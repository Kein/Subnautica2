using UnrealBuildTool;

public class UWESteamDeckRuntime : ModuleRules {
    public UWESteamDeckRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
