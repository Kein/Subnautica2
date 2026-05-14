using UnrealBuildTool;

public class UWEPhotoTours : ModuleRules {
    public UWEPhotoTours(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UWEAutomationTesting",
            "UWEImGui",
        });
    }
}
