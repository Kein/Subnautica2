using UnrealBuildTool;

public class UWECommonUI : ModuleRules {
    public UWECommonUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "InputCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
