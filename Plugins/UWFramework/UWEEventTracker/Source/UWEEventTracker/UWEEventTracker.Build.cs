using UnrealBuildTool;

public class UWEEventTracker : ModuleRules {
    public UWEEventTracker(ReadOnlyTargetRules Target) : base(Target) {
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
            "UWEImGui",
            "UWESaveSystem",
        });
    }
}
