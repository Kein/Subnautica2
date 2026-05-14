using UnrealBuildTool;

public class UWENewsfeed : ModuleRules {
    public UWENewsfeed(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "ModelViewViewModel",
            "UMG",
            "UWESonarAPI",
        });
    }
}
