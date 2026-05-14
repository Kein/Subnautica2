using UnrealBuildTool;

public class OnlineSubsystemGPP : ModuleRules {
    public OnlineSubsystemGPP(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GPP",
            "InputCore",
            "SlateCore",
            "UMG",
        });
    }
}
