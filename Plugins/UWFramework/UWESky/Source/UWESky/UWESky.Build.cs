using UnrealBuildTool;

public class UWESky : ModuleRules {
    public UWESky(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DaySequence",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "UWEImGui",
            "UWETimeOfDay",
            "UWEWeather",
        });
        PrivateIncludePaths.AddRange(new string[] {
            System.IO.Path.Combine(GetModuleDirectory("DaySequence"), "DaySequence/Private"),
            System.IO.Path.Combine(GetModuleDirectory("DaySequence"), "Private"),
            System.IO.Path.Combine(GetModuleDirectory("DaySequence"), "Public")
        });
    }
}
