using UnrealBuildTool;

public class UWETriggeredNotifications : ModuleRules {
    public UWETriggeredNotifications(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "UWEAssetRegistry",
            "UWEEventTracker",
            "UWEStoryGoals",
        });
    }
}
