#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "TrackedVolumeData.h"
#include "EUWEEditActionLegality.h"
#include "UWEBaseModulePieceID.h"
#include "UWEBrushTypePowerEfficiencyMultipliers.h"
#include "UWEBrushTypeSettings.h"
#include "UWEConstructionProgressMaterial.h"
#include "UWESculpturalEditGhostMaterials.h"
#include "UWESupportOverrides.h"
#include "UWESculpturalBaseModuleSettings.generated.h"

class AUWEBaseRefundActor;
class AUWEBaseSupportActor;
class AUWEPingMarker;
class AUWESculpturalBaseActor;
class AUWESculpturalBaseProxy;
class UDataAsset;
class UMaterialInstance;
class UMaterialInterface;
class UNiagaraSystem;
class UStaticMesh;
class UUWEBaseModule;
class UUWEPingData;

UCLASS(BlueprintType, DefaultConfig, Config=UWESculputuralBase)
class UWESCULPTURALBASE_API UUWESculpturalBaseModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float UWESelectionSphereTraceRadius;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> SculptedBaseTraceChannel;
    
    UPROPERTY(Config, EditAnywhere)
    float CellSize;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> SelectionMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> BlockingHighlightMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> PlayerBlockingHighlightMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockingHighlightFadeInDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockingHighlightFadeOutDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TSoftObjectPtr<UMaterialInterface>, FUWEConstructionProgressMaterial> ConstructionProgressMaterialOverrides;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> ModuleEditorVisualizeMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> CellOverlapMesh;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> CellOverlapDebugMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    FTrackedVolumeData BaseOverlapVolumeData;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, FUWEBrushTypeSettings> BrushTypeSettings;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FloorHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float BottomSnappingOffset;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EUWEEditActionLegality, FGameplayTag> EditActionLegalityToReasonTag;
    
    UPROPERTY(Config, EditAnywhere)
    FColor CellDebugDefaultColor;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, FColor> BrushTypeDebugColors;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> NoMatchDebugMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FColor GhostGrowValidColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor GhostShrinkValidColor;
    
    UPROPERTY(Config, EditAnywhere)
    bool RenderAirVolumesForBase;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UUWEBaseModule>> DebugRuleGen;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoGenErrorRange;
    
    UPROPERTY(Config, EditAnywhere)
    float BaseCorePowerDrainPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, FUWEBrushTypePowerEfficiencyMultipliers> BrushTypePowerEfficiencyModifier;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FUWESculpturalEditGhostMaterials SculptGhostMaterials;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AUWEBaseSupportActor> SupportActor;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FUWEBaseModulePieceID, FUWESupportOverrides> PieceToSupportOverrides;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FUWEBaseModulePieceID> ExcludeSupports;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AUWESculpturalBaseProxy> ProxyClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AUWEBaseRefundActor> RefundContainerActor;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AUWEPingMarker> RefundBeaconActor;
    
    UPROPERTY(Config, EditAnywhere)
    FText BaseSignalText;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEPingData> BasePingData;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEPingData> RefundPingData;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<TSoftObjectPtr<UDataAsset>> BuildablesToShowInRefundMenu;
    
    UPROPERTY(Config, EditAnywhere)
    FText RefundText;
    
    UPROPERTY(Config, EditAnywhere)
    FText PingRefundText;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSupportLength;
    
    UPROPERTY(Config, EditAnywhere)
    uint64 MaxGlobalCellCount;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AUWESculpturalBaseActor> EmptyInitialBaseActor;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, int32> BuilderCannotActivateReasonPriorities;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer GroundSurfaceTags;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> SupportPreviewFX;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> PowerConnectionPreviewFX;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FGameplayTag> DisallowedBrushTypesForSupportBase;
    
    UUWESculpturalBaseModuleSettings();

};

