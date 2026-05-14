using UnrealBuildTool;

public class UWESaveSystem : ModuleRules {
    public UWESaveSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "ModelViewViewModel",
            "ModularGameplay",
            "UWEImGui",
            "UWESonarAPI",
            "UWEUtilities",
        });
    }
}
