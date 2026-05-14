using UnrealBuildTool;

public class UWEWeather : ModuleRules {
    public UWEWeather(ReadOnlyTargetRules Target) : base(Target) {
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
