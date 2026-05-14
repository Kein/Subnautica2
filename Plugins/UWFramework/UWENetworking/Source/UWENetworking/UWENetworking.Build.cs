using UnrealBuildTool;

public class UWENetworking : ModuleRules {
    public UWENetworking(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "ReplicationGraph",
            "UWEImGui",
            "UWEInterfaces",
        });
    }
}
