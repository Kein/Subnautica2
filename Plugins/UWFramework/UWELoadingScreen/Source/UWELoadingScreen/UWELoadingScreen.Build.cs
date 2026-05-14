using UnrealBuildTool;

public class UWELoadingScreen : ModuleRules {
    public UWELoadingScreen(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonLoadingScreen",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
