using UnrealBuildTool;

public class UWEWaterCurrents : ModuleRules {
    public UWEWaterCurrents(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GeometryFramework",
            "GeometryScriptingCore",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEInterfaces",
            "UWEPhysics",
        });
    }
}
