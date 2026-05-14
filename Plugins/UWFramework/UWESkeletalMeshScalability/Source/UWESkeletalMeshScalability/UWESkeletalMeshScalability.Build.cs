using UnrealBuildTool;

public class UWESkeletalMeshScalability : ModuleRules {
    public UWESkeletalMeshScalability(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimationBudgetAllocator",
            "Core",
            "CoreUObject",
            "Engine",
            "UWETickAggregation",
        });
    }
}
