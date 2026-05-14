using UnrealBuildTool;

public class UWEDynamicEvents : ModuleRules {
    public UWEDynamicEvents(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "NetCore",
            "UWEAssetRegistry",
            "UWESaveSystem",
            "UWETimeOfDay",
        });
    }
}
