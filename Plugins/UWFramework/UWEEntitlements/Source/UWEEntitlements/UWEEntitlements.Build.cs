using UnrealBuildTool;

public class UWEEntitlements : ModuleRules {
    public UWEEntitlements(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUser",
            "Core",
            "CoreUObject",
            "Engine",
            "UWEAssetRegistry",
            "UWEImGui",
            "UWEUnlockables",
        });
    }
}
