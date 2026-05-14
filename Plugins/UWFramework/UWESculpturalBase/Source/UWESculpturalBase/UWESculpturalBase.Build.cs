using UnrealBuildTool;

public class UWESculpturalBase : ModuleRules {
    public UWESculpturalBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "NetCore",
            "Niagara",
            "UWEActorUID",
            "UWEAssetRegistry",
            "UWEInventory",
            "UWELoadingScreen",
            "UWEMath",
            "UWEPingSystem",
            "UWEPower",
            "UWESaveSystem",
            "UWESpawnSystems",
            "UWEUtilities",
            "UWEVolumeTracker",
        });
    }
}
