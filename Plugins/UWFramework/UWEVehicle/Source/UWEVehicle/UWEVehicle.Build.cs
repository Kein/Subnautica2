using UnrealBuildTool;

public class UWEVehicle : ModuleRules {
    public UWEVehicle(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "UWEAssetRegistry",
        });
    }
}
