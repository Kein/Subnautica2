using UnrealBuildTool;

public class UWEAIDynamicEvents : ModuleRules {
    public UWEAIDynamicEvents(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEAI",
            "UWEDynamicEvents",
        });
    }
}
