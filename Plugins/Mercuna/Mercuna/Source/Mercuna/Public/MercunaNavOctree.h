#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EMerOctreeDebugDrawMode.h"
#include "EMercunaWaterMode.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaNavOctree.generated.h"

class AActor;
class UMercunaPath;
class UMercunaSmoothPath;
class UObject;

UCLASS(Config=Engine)
class MERCUNA_API AMercunaNavOctree : public AMercunaNavGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 MinPawnRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 MaxPawnRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    bool bRestrictToSurfaces;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bRecordOctreeDeltas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    EMercunaWaterMode WaterMode;
    
    UPROPERTY(BlueprintAssignable)
    AMercunaNavGraph::FMercunaBuildComplete OnBuildLowResReady;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaBuildComplete OnBuildComplete;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildComplete;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildLowResReady;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaLoadComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavGraph::FMercunaLoadComplete OnShortRangeLoadComplete;
    
private:
    UPROPERTY(Transient)
    EMerOctreeDebugDrawMode DebugDrawMode;
    
public:
    AMercunaNavOctree(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavigationRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolumes(const TArray<FBox>& Volumes, bool bStagedBuild, bool bRemoveUnseeded, bool bMergeVolumes);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolume(const AActor* Volume, bool StagedBuild, bool RemoveUnseeded);
    
    UFUNCTION(BlueprintCallable)
    void RebuildChanges(bool StagedBuild, bool RemoveUnseeded);
    
    UFUNCTION(BlueprintCallable)
    void Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachableLatent(FVector Start, const TArray<FVector>& EndPos, float NavigationRadius, TArray<bool>& Result, TArray<FVector>& ClampedPos, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, bool AccuratePathLength, float StartSearchRadius, float EndSearchRadius);
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigable(FVector position, float NavigationRadius, bool& Result);
    
    UFUNCTION(BlueprintPure)
    bool IsBuilding() const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* EndActor, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToLocation(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToActor(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* EndActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToLocation(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToActor(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    void ClampToNavigable(FVector position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    void Build(const TArray<FVector>& PriorityPositions);
    
};

