#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EMercunaProjectionDirection.h"
#include "MercunaAutoNavLinkForUpdate.h"
#include "MercunaGroundAgentType.h"
#include "MercunaNavEdge.h"
#include "MercunaNavGraph2D.h"
#include "MercunaNavInvoker.h"
#include "MercunaNavLinkIdentifier.h"
#include "MercunaNavLinkInfo.h"
#include "MercunaNavMeshEdge.h"
#include "MercunaUsageSpec.h"
#include "MercunaUsageTypes.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaNavGroundGrid.generated.h"

class AActor;
class AMercunaNavGroundGrid;
class AMercunaNavInvokerVolume;
class UMercunaPath;
class UMercunaSmoothPath;
class UObject;

UCLASS(Config=Engine)
class MERCUNA_API AMercunaNavGroundGrid : public AMercunaNavGraph2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bCutOutStationaryObstacles;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bGenerateAutoLinks;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bWaterEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    bool bIgnoreCurbsDuringAutoLinkGeneration;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSubCellRasterization;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    float RoughSurfacePerchFraction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    bool bOverrideCellHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    float CellHeightOverride;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float NavInvokerUpdateFrequency;
    
private:
    UPROPERTY(Transient)
    TArray<FMercunaNavInvoker> NavInvokers;
    
    UPROPERTY(Transient)
    TArray<AMercunaNavInvokerVolume*> NavInvokerVolumes;
    
public:
    AMercunaNavGroundGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAutoGenNavLinks(const TArray<FMercunaAutoNavLinkForUpdate>& LinksToUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNavInvoker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToObjFile(FMercunaGroundAgentType AgentType, bool bDrawPolyMesh) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavInvoker(AActor* Actor, FName AgentType, float GenerationRadius, float RemovalRadius);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolumes(const TArray<FBox>& Volumes, bool bMergeVolumes, bool bOnlyUnbuilt, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolume(const AActor* Volume, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Raycast(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, bool& bRayHit, FVector& HitPosition, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProjectToNavigable(const FMercunaGroundAgentType& AgentType, FVector position, EMercunaProjectionDirection Direction, bool& bResult, FVector& ProjectedPosition, float SearchHeight, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachableLatent(const FMercunaGroundAgentType& AgentType, FVector From, const TArray<FVector>& To, TArray<bool>& Result, TArray<float>& PathLengths, TArray<FVector>& ClampedTo, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, float FromSearchRadius, float ToSearchRadius, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsReachable(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, float& PathLength, float MaxPathLength, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsNavigableMulti(const FMercunaGroundAgentType& AgentType, const TArray<FVector>& Positions, TArray<bool>& Results, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuiltWithinBox(const FMercunaGroundAgentType& AgentType, const FBox& Box) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuilt(const FMercunaGroundAgentType& AgentType, const FVector& Pos) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyWorkInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetWaterEdges(const FMercunaGroundAgentType& AgentType, FVector position, float MaxPathDistance, TArray<FMercunaNavEdge>& Edges, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumBoxesBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetNavigableSpaceEdges(const FMercunaGroundAgentType& AgentType, const FVector& position, TArray<FMercunaNavMeshEdge>& NavMeshEdges, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestPosOutOfWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxDistance, bool DistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestPosInWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxDistance, bool DistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestNavigableSpaceEdge(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, FMercunaNavMeshEdge& ClosestEdge, FVector& ClosestPoint, const float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AMercunaNavGroundGrid* GetBestNavGridInstance(UObject* WorldContext, const FVector& position, const FMercunaGroundAgentType& AgentType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume, TArray<FMercunaNavLinkInfo>& Results) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateRandomPointsInBox(const FMercunaGroundAgentType& AgentType, const FBox& Volume, int32 NumPoints, TArray<FVector>& Results, const FRotator& Rotator, int32 RandomSeed, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateRandomPoints(const FMercunaGroundAgentType& AgentType, const FVector position, float MaxDistance, int32 NumPoints, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, int32 RandomSeed, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateGridOfPoints(const FMercunaGroundAgentType& AgentType, FVector position, float MaxDistance, float SpaceBetween, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, bool AlignPointsToCentre, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromLocationToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndDir, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathFromActorToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromLocationToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndDir, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathFromActorToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume);
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers);
    
    UFUNCTION(BlueprintCallable)
    void Create();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClampToNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, float SearchRadius, float HeightRange, bool& bResult, FVector& ClampedPosition, FMercunaUsageTypes& ClampedUsageTypes, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable)
    void Build(const TArray<FVector>& PriorityPositions);
    
};

