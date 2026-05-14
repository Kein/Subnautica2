using UnrealBuildTool;

public class UWEPinnedRecipes : ModuleRules {
    public UWEPinnedRecipes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UWEAssetRegistry",
            "UWESaveSystem",
        });
    }
}
