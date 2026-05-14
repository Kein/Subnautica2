#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EMercunaProjectionDirection.h"
#include "MercunaNavGraph2D.h"
#include "MercunaNavMeshEdge.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaUsageTypes.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaNavSurfaceGrid.generated.h"

class AActor;
class AMercunaNavSurfaceGrid;
class UMercunaPath;
class UMercunaSmoothPath;
class UObject;

UCLASS()
class MERCUNA_API AMercunaNavSurfaceGrid : public AMercunaNavGraph2D {
    GENERATED_BODY()
public:
    AMercunaNavSurfaceGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToObjFile(FMercunaSurfaceAgentType AgentType, bool bDrawPolyMesh) const;
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolumes(const TArray<FBox>& Volumes, bool bMergeVolumes, bool bOnlyUnbuilt, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolume(const AActor* Volume, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Raycast(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const FVector To, bool& bRayHit, FVector& HitPosition, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProjectToNavigable(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, EMercunaProjectionDirection Direction, bool& bResult, FVector& ProjectedPosition, float SearchDistance, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachableLatent(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const TArray<FVector>& To, TArray<bool>& Result, TArray<float>& PathLengths, TArray<FVector>& ClampedTo, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, float FromSearchRadius, float ToSearchRadius, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsReachable(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const FVector To, float& PathLength, float MaxPathLength, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsNavigable(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, bool& bResult, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuiltWithinBox(const FMercunaSurfaceAgentType& AgentType, const FBox& Box) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuilt(const FMercunaSurfaceAgentType& AgentType, const FVector& Pos) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyWorkInProgress() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumBoxesBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetNavigableSpaceEdges(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, TArray<FMercunaNavMeshEdge>& NavMeshEdges, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestNavigableSpaceEdge(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, bool& bResult, FMercunaNavMeshEdge& ClosestEdge, FVector& ClosestPoint, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AMercunaNavSurfaceGrid* GetBestNavGridInstance(UObject* WorldContext, const FVector& position, const FMercunaSurfaceAgentType& AgentType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateRandomPointsInBox(const FMercunaSurfaceAgentType& AgentType, const FBox& Volume, int32 NumPoints, TArray<FVector>& Results, const FRotator& Rotator, int32 RandomSeed, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateRandomPoints(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, float MaxDistance, int32 NumPoints, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, int32 RandomSeed, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateGridOfPoints(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, float MaxDistance, float SpaceBetween, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, bool AlignPointsToCentre, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocations(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, const TArray<FVector>& Destinations, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, FVector End, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndUp, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocations(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, const TArray<FVector>& Destinations, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, FVector End, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndUp, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClampToNavigable(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, float SearchRadius, float HeightRange, bool& bResult, FVector& ClampedPosition, FVector& ClampedUp, FMercunaUsageTypes& ClampedUsageTypes, const FMercunaUsageSpec UsageSpec) const;
    
    UFUNCTION(BlueprintCallable)
    void Build(const TArray<FVector>& PriorityPositions);
    
};

