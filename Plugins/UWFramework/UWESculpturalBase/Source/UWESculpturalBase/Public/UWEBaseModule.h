#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAdjacentModuleRules.h"
#include "UWEBaseModuleHeightVariant.h"
#include "UWEBaseModulePiece.h"
#include "UWEBaseModuleRuleGenParams.h"
#include "UWEBaseModuleVariant.h"
#include "UWEBrushTypeRequirements.h"
#include "UWEBuildAheadCollisions.h"
#include "UWEModuleGhostMesh.h"
#include "UWEOverlapMesh.h"
#include "UWESelectionOverride.h"
#include "UWESupportOverrides.h"
#include "UWEBaseModule.generated.h"

class UStaticMesh;

UCLASS()
class UWESCULPTURALBASE_API UUWEBaseModule : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool Enabled;
    
    UPROPERTY()
    TWeakObjectPtr<UStaticMesh> CachedOverlapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, FUWEBaseModulePiece> Pieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EditorReferenceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowToSpanFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseHeightInFloor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEBaseModuleVariant> VariantMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEBaseModuleHeightVariant> HeightBasedMeshOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverrideDefaultSelection;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, FUWESelectionOverride> DefaultSelectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEBuildAheadCollisions> BuildAheadCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSet<FIntVector> BuildaheadRequiredEmptyCells;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEModuleGhostMesh> GhostMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEOverlapMesh OverlapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector MeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FUWEBaseModuleRuleGenParams RuleGenerationParams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FRotator> AllowedRotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, FUWEBrushTypeRequirements> BrushTypeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, FUWEAdjacentModuleRules> ManualAdjacentModuleRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, bool> ManualInteriorCorners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ManuallySpecifyMeshHolderCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector ManualMeshHolderCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, FUWESupportOverrides> CoordToSupportOverrides;
    
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    TMap<int32, FUWEBaseModuleHeightVariant> MainLevelVariantMeshes;
    
    UPROPERTY()
    TMap<int32, FUWEBaseModuleHeightVariant> HeightVariantMeshes;
    
public:
    UUWEBaseModule();

    UFUNCTION(BlueprintCallable)
    void RefreshPieceRules();
    
    UFUNCTION()
    uint32 GetVersion() const;
    
};

