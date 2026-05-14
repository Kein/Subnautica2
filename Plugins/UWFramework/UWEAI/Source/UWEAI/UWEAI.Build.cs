using UnrealBuildTool;

public class UWEAI : ModuleRules {
    public UWEAI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Mercuna",
            "SmartObjectsModule",
            "UWEAIMovement",
            "UWEAbilitySystem",
            "UWEAssetRegistry",
            "UWEBreakable",
            "UWEInterfaces",
            "UWEMath",
            "UWEMercuna",
            "UWENetworking",
            "UWEPawnAttachment",
            "UWEPhysics",
            "UWESequence",
            "UWEStoryGoals",
            "UWETickAggregation",
            "UWEVolumeTracker",
            "UWEWorldPopulation2",
            "LevelSequence"
        });
    }
}
