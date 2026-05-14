using UnrealBuildTool;

public class UWEDialogue : ModuleRules {
    public UWEDialogue(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "GameplayTags",
            "ModelViewViewModel",
            "UWEAssetRegistry",
            "UWEAudio",
            "UWECommonUI",
            "CommonUI",
            "CommonInput",
            "UWEStoryEvents",
            "Slate",
            "SlateCore",
            "UMG"
        });
    }
}
