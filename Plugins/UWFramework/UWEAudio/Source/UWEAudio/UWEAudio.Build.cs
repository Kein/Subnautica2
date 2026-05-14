using UnrealBuildTool;

public class UWEAudio : ModuleRules {
    public UWEAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "UWEAssetRegistry",
        });
    }
}
