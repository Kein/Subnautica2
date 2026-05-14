using UnrealBuildTool;

public class UWEDynamicItems : ModuleRules {
    public UWEDynamicItems(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "UWEActorUID",
            "UWEImGui",
            "UWESaveSystem",
            "UWEUtilities",
        });
    }
}
