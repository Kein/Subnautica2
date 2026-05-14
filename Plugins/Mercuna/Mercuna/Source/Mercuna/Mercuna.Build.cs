using UnrealBuildTool;

public class Mercuna : ModuleRules {
    public Mercuna(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ChaosVehicles",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "Mercuna3DMovement",
            "PhysicsCore",
            "PoseSearch",
        });
    }
}
