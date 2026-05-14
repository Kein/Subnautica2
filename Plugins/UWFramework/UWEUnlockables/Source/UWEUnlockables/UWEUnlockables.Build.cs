using UnrealBuildTool;

public class UWEUnlockables : ModuleRules {
    public UWEUnlockables(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEAssetRegistry",
            "UWEDialogue",
        });
    }
}
