using UnrealBuildTool;

public class UWEFrontend : ModuleRules {
    public UWEFrontend(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonLoadingScreen",
            "CommonUI",
            "CommonUser",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "ModelViewViewModel",
            "UWECommonUI",
            "UWENotifications",
            "UWESonar",
        });
    }
}
