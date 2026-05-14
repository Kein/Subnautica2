using UnrealBuildTool;

public class UWEAIMovement : ModuleRules {
    public UWEAIMovement(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Mercuna",
            "Mercuna3DMovement",
            "UWEAssetRegistry",
            "UWEInterfaces",
            "UWEMath",
            "UWEUtilities",
        });
    }
}
