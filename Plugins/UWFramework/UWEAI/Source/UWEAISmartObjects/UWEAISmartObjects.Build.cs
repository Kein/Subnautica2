using UnrealBuildTool;

public class UWEAISmartObjects : ModuleRules {
    public UWEAISmartObjects(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayBehaviorSmartObjectsModule",
            "GameplayTags",
            "GameplayTasks"
        });
    }
}
