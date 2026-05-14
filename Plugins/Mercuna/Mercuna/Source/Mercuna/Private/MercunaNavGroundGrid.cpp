#include "MercunaNavGroundGrid.h"

AMercunaNavGroundGrid::AMercunaNavGroundGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCutOutStationaryObstacles = false;
    this->bGenerateAutoLinks = false;
    this->bWaterEnabled = true;
    this->bIgnoreCurbsDuringAutoLinkGeneration = true;
    this->bSubCellRasterization = true;
    this->RoughSurfacePerchFraction = 0.30f;
    this->bOverrideCellHeight = false;
    this->CellHeightOverride = 10.00f;
    this->NavInvokerUpdateFrequency = 1.00f;
}

void AMercunaNavGroundGrid::UpdateAutoGenNavLinks(const TArray<FMercunaAutoNavLinkForUpdate>& LinksToUpdate) {
}

void AMercunaNavGroundGrid::UnregisterNavInvoker(AActor* Actor) {
}

void AMercunaNavGroundGrid::SaveToObjFile(FMercunaGroundAgentType AgentType, bool bDrawPolyMesh) const {
}

void AMercunaNavGroundGrid::RegisterNavInvoker(AActor* Actor, FName AgentType, float GenerationRadius, float RemovalRadius) {
}

void AMercunaNavGroundGrid::RebuildVolumes(const TArray<FBox>& Volumes, bool bMergeVolumes, bool bOnlyUnbuilt, bool bApplyNavSeeds) {
}

void AMercunaNavGroundGrid::RebuildVolume(const AActor* Volume, bool bApplyNavSeeds) {
}

void AMercunaNavGroundGrid::RebuildChanges() {
}

void AMercunaNavGroundGrid::Raycast(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, bool& bRayHit, FVector& HitPosition, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::ProjectToNavigable(const FMercunaGroundAgentType& AgentType, FVector position, EMercunaProjectionDirection Direction, bool& bResult, FVector& ProjectedPosition, float SearchHeight, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::IsReachableLatent(const FMercunaGroundAgentType& AgentType, FVector From, const TArray<FVector>& To, TArray<bool>& Result, TArray<float>& PathLengths, TArray<FVector>& ClampedTo, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, float FromSearchRadius, float ToSearchRadius, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

bool AMercunaNavGroundGrid::IsReachable(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, float& PathLength, float MaxPathLength, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
    return false;
}

void AMercunaNavGroundGrid::IsNavigableMulti(const FMercunaGroundAgentType& AgentType, const TArray<FVector>& Positions, TArray<bool>& Results, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::IsNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

bool AMercunaNavGroundGrid::IsBuiltWithinBox(const FMercunaGroundAgentType& AgentType, const FBox& Box) const {
    return false;
}

bool AMercunaNavGroundGrid::IsBuilt(const FMercunaGroundAgentType& AgentType, const FVector& Pos) const {
    return false;
}

bool AMercunaNavGroundGrid::IsBuilding() const {
    return false;
}

bool AMercunaNavGroundGrid::IsAnyWorkInProgress() const {
    return false;
}

void AMercunaNavGroundGrid::GetWaterEdges(const FMercunaGroundAgentType& AgentType, FVector position, float MaxPathDistance, TArray<FMercunaNavEdge>& Edges, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

int32 AMercunaNavGroundGrid::GetNumBoxesBuilding() const {
    return 0;
}

void AMercunaNavGroundGrid::GetNavigableSpaceEdges(const FMercunaGroundAgentType& AgentType, const FVector& position, TArray<FMercunaNavMeshEdge>& NavMeshEdges, float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::GetClosestPosOutOfWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxDistance, bool DistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::GetClosestPosInWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxDistance, bool DistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::GetClosestNavigableSpaceEdge(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, FMercunaNavMeshEdge& ClosestEdge, FVector& ClosestPoint, const float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

AMercunaNavGroundGrid* AMercunaNavGroundGrid::GetBestNavGridInstance(UObject* WorldContext, const FVector& position, const FMercunaGroundAgentType& AgentType) {
    return NULL;
}

void AMercunaNavGroundGrid::GetAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume, TArray<FMercunaNavLinkInfo>& Results) const {
}

void AMercunaNavGroundGrid::GenerateRandomPointsInBox(const FMercunaGroundAgentType& AgentType, const FBox& Volume, int32 NumPoints, TArray<FVector>& Results, const FRotator& Rotator, int32 RandomSeed, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::GenerateRandomPoints(const FMercunaGroundAgentType& AgentType, const FVector position, float MaxDistance, int32 NumPoints, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, int32 RandomSeed, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::GenerateGridOfPoints(const FMercunaGroundAgentType& AgentType, FVector position, float MaxDistance, float SpaceBetween, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, bool AlignPointsToCentre, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

UMercunaSmoothPath* AMercunaNavGroundGrid::FindSmoothPathFromLocationToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavGroundGrid::FindSmoothPathFromLocationToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavGroundGrid::FindSmoothPathFromLocationToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavGroundGrid::FindSmoothPathFromActorToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndDir, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavGroundGrid::FindSmoothPathFromActorToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxReverseSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavGroundGrid::FindPathFromLocationToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavGroundGrid::FindPathFromLocationToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavGroundGrid::FindPathFromLocationToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavGroundGrid::FindPathFromActorToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, FVector EndDir, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

UMercunaPath* AMercunaNavGroundGrid::FindPathFromActorToActor(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec) {
    return NULL;
}

void AMercunaNavGroundGrid::EnableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume) {
}

void AMercunaNavGroundGrid::EnableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers) {
}

void AMercunaNavGroundGrid::DisableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume) {
}

void AMercunaNavGroundGrid::DisableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers) {
}

void AMercunaNavGroundGrid::Create() {
}

void AMercunaNavGroundGrid::ClampToNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, float SearchRadius, float HeightRange, bool& bResult, FVector& ClampedPosition, FMercunaUsageTypes& ClampedUsageTypes, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const {
}

void AMercunaNavGroundGrid::Build(const TArray<FVector>& PriorityPositions) {
}


