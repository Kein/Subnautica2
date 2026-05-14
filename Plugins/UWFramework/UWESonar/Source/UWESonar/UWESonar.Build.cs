using UnrealBuildTool;

public class UWESonar : ModuleRules {
    public UWESonar(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "CommonUser",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "ModelViewViewModel",
            "UWECommonUI",
            "UWEGameModeTypes",
            "UWEImGui",
            "UWESonarAPI",
        });
    }
}
