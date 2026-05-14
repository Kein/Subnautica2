using UnrealBuildTool;

public class UWEEquipment : ModuleRules {
    public UWEEquipment(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "UMG",
            "UWEInventory",
            "UWESaveSystem",
            "UWEStoryGoals",
            "UWEInterfaces"
        });
    }
}
