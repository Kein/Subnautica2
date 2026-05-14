using UnrealBuildTool;

public class UWEPawnAttachment : ModuleRules {
    public UWEPawnAttachment(ReadOnlyTargetRules Target) : base(Target) {
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
            "LevelSequence",
            "NetCore",
            "UWEActorUID",
            "UWECamera",
            "UWEInterfaces",
            "UWESaveSystem",
        });
    }
}
