#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWESaveCallbacks.h"
#include "CellChangeISMInstances.h"
#include "CellChangeISMParams.h"
#include "SN2BuilderGhostParams.h"
#include "SN2DynamicMaterialInfo.h"
#include "SN2GhostMaterialKey.h"
#include "SN2GhostPlacement.h"
#include "SN2BuilderGhost.generated.h"

class UChildActorComponent;
class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UMeshComponent;
class UPrimitiveComponent;
class USN2BuilderGhostPlacementComponent;
class USN2ConstructableComponent;
class UShapeComponent;
class UStaticMesh;
class UUWESaveComponent;
class UVolumeTrackerComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BuilderGhost : public AActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2BuilderGhostPlacementComponent* PlacementComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2ConstructableComponent* ConstructableComponent;
    
protected:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_GhostParams)
    FSN2BuilderGhostParams GhostParams;
    
    UPROPERTY(Replicated, SaveGame)
    FGuid Guid;
    
    UPROPERTY()
    int32 bMaterialBoundsDirty;
    
    UPROPERTY()
    bool IsHovered;
    
    UPROPERTY()
    bool IsWaitingForBaseUpdates;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UMeshComponent*, bool> SMsWaitingForMaterial;
    
    UPROPERTY(Export)
    TSet<UPrimitiveComponent*> OverlayMeshComps;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UMeshComponent*> ActorGhostMeshes;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UShapeComponent*> ActorGhostColliders;
    
    UPROPERTY(Instanced)
    UChildActorComponent* CustomizerChildActor;
    
    UPROPERTY(ReplicatedUsing=OnRep_ActorMeshTransforms)
    TArray<FTransform> ActorMeshTransforms;
    
    UPROPERTY(Instanced)
    TMap<FCellChangeISMParams, UInstancedStaticMeshComponent*> CellChangeISMs;
    
    UPROPERTY()
    TMap<FCellChangeISMParams, FCellChangeISMInstances> CellChangeISMsNeedingCollision;
    
    UPROPERTY()
    TMap<uint32, UMaterialInterface*> LoadedMaterials;
    
    UPROPERTY()
    TMap<uint32, UStaticMesh*> LoadedMeshes;
    
    UPROPERTY()
    TSet<FIntVector> RepresentedCells;
    
    UPROPERTY()
    TMap<FSN2GhostMaterialKey, FSN2DynamicMaterialInfo> DynamicMaterials;
    
    UPROPERTY(Instanced)
    UUWESaveComponent* SaveComponent;
    
public:
    ASN2BuilderGhost(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UpdateMaterial(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetGhostParams(const FSN2BuilderGhostParams& NewGhostParams);
    
    UFUNCTION(BlueprintCallable)
    void ResetConstructionProgress();
    
protected:
    UFUNCTION()
    void OnRep_GhostParams();
    
    UFUNCTION()
    void OnRep_ActorMeshTransforms();
    
    UFUNCTION()
    void OnBaseReplicationFinished();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlacementLegal(FSN2GhostPlacement GhostPlacement) const;
    
    UFUNCTION(BlueprintPure)
    FBox GetLocalBounds(bool IgnorePlacementVolumes) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGUID() const;
    
    UFUNCTION(BlueprintPure)
    FSN2BuilderGhostParams GetGhostParams() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetConstructedAreaBounds() const;
    

    // Fix for true pure virtual functions not being implemented
};

