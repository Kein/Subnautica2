using UnrealBuildTool;

public class UWEAmbienceSound : ModuleRules {
    public UWEAmbienceSound(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FMODStudio",
            "UWEGameplayCues",
            "UWEImGui",
        });
    }
}
