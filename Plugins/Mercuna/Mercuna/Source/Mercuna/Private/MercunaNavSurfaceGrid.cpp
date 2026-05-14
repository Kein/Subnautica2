#include "MercunaNavSurfaceGrid.h"

AMercunaNavSurfaceGrid::AMercunaNavSurfaceGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseNavSeeds = false;
}

void AMercunaNavSurfaceGrid::SaveToObjFile(FMercunaSurfaceAgentType AgentType, bool bDrawPolyMesh) const {
}

void AMercunaNavSurfaceGrid::RebuildVolumes(const TArray<FBox>& Volumes, bool bMergeVolumes, bool bOnlyUnbuilt, bool bApplyNavSeeds) {
}

void AMercunaNavSurfaceGrid::RebuildVolume(const AActor* Volume, bool bApplyNavSeeds) {
}

void AMercunaNavSurfaceGrid::RebuildChanges() {
}

void AMercunaNavSurfaceGrid::Raycast(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const FVector To, bool& bRayHit, FVector& HitPosition, const FMercunaUsageSpec UsageSpec) const {
}

void AMercunaNavSurfaceGrid::ProjectToNavigable(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, EMercunaProjectionDirection Direction, bool& bResult, FVector& ProjectedPosition, float SearchDistance, const FMercunaUsageSpec UsageSpec) const {
}

void AMercunaNavSurfaceGrid::IsReachableLatent(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const TArray<FVector>& To, TArray<bool>& Result, TArray<float>& PathLengths, TArray<FVector>& ClampedTo, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, float FromSearchRadius, float ToSearchRadius, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const {
}

bool AMercunaNavSurfaceGrid::IsReachable(const FMercunaSurfaceAgentType& AgentType, FVector From, FVector FromUp, const FVector To, float& PathLength, float MaxPathLength, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const {
    return false;
}

void AMercunaNavSurfaceGrid::IsNavigable(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, bool& bResult, const FMercunaUsageSpec UsageSpec) const {
}

bool AMercunaNavSurfaceGrid::IsBuiltWithinBox(const FMercunaSurfaceAgentType& AgentType, const FBox& Box) const {
    return false;
}

bool AMercunaNavSurfaceGrid::IsBuilt(const FMercunaSurfaceAgentType& AgentType, const FVector& Pos) const {
    return false;
}

bool AMercunaNavSurfaceGrid::IsBuilding() const {
    return false;
}

bool AMercunaNavSurfaceGrid::IsAnyWorkInProgress() const {
    return false;
}

int32 AMercunaNavSurfaceGrid::GetNumBoxesBuilding() const {
    return 0;
}

void AMercunaNavSurfaceGrid::GetNavigableSpaceEdges(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, TArray<FMercunaNavMeshEdge>& NavMeshEdges, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavSurfaceGrid::GetClosestNavigableSpaceEdge(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, bool& bResult, FMercunaNavMeshEdge& ClosestEdge, FVector& ClosestPoint, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

AMercunaNavSurfaceGrid* AMercunaNavSurfaceGrid::GetBestNavGridInstance(UObject* WorldContext, const FVector& position, const FMercunaSurfaceAgentType& AgentType) {
    return NULL;
}

void AMercunaNavSurfaceGrid::GenerateRandomPointsInBox(const FMercunaSurfaceAgentType& AgentType, const FBox& Volume, int32 NumPoints, TArray<FVector>& Results, const FRotator& Rotator, int32 RandomSeed, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavSurfaceGrid::GenerateRandomPoints(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, float MaxDistance, int32 NumPoints, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, int32 RandomSeed, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const {
}

void AMercunaNavSurfaceGrid::GenerateGridOfPoints(const FMercunaSurfaceAgentType& AgentType, FVector position, FVector Up, float MaxDistance, float SpaceBetween, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, bool AlignPointsToCentre, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec) const {
}

UMercunaSmoothPath* AMercunaNavSurfaceGrid::FindSmoothPathFromLocationToLocations(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, const TArray<FVector>& Destinations, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavSurfaceGrid::FindSmoothPathFromLocationToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, FVector End, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavSurfaceGrid::FindSmoothPathFromLocationToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavSurfaceGrid::FindSmoothPathFromActorToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndUp, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavSurfaceGrid::FindSmoothPathFromActorToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavSurfaceGrid::FindPathFromLocationToLocations(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, const TArray<FVector>& Destinations, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavSurfaceGrid::FindPathFromLocationToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, FVector End, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavSurfaceGrid::FindPathFromLocationToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartUp, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavSurfaceGrid::FindPathFromActorToLocation(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndUp, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavSurfaceGrid::FindPathFromActorToActor(const FMercunaSurfaceAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, const FMercunaUsageSpec& UsageSpec) {
    return NULL;
}

void AMercunaNavSurfaceGrid::ClampToNavigable(const FMercunaSurfaceAgentType& AgentType, const FVector position, const FVector Up, float SearchRadius, float HeightRange, bool& bResult, FVector& ClampedPosition, FVector& ClampedUp, FMercunaUsageTypes& ClampedUsageTypes, const FMercunaUsageSpec UsageSpec) const {
}

void AMercunaNavSurfaceGrid::Build(const TArray<FVector>& PriorityPositions) {
}


