using UnrealBuildTool;

public class UWESubmarine : ModuleRules {
    public UWESubmarine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "UWEAISpeaker",
            "UWEAbilitySystem",
            "UWEAlerts",
            "UWEMovement",
            "UWENetworking",
            "UWEPawnAttachment",
            "UWEVolumeTracker",
        });
    }
}
