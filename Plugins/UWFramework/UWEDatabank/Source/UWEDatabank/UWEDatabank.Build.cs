using UnrealBuildTool;

public class UWEDatabank : ModuleRules {
    public UWEDatabank(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UWEAssetRegistry",
            "UWEStoryGoals",
        });
    }
}
