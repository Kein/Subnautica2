using UnrealBuildTool;

public class UWEAnalytics : ModuleRules {
    public UWEAnalytics(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnalyticsBlueprintLibrary",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEImGui",
        });
    }
}
