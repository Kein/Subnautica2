#include "MercunaNavOctree.h"
#include "MerNavOctreeRenderingComponent.h"

AMercunaNavOctree::AMercunaNavOctree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMerNavOctreeRenderingComponent>(TEXT("MerNavOctreeRenderingComponent"));
    this->MerNavGraphRenderingComponent = (UMerNavGraphRenderingComponent*)RootComponent;
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 3;
    this->bRestrictToSurfaces = false;
    this->bRecordOctreeDeltas = false;
    this->WaterMode = EMercunaWaterMode::Everywhere;
    this->DebugDrawMode = EMerOctreeDebugDrawMode::DISABLED;
}

void AMercunaNavOctree::SetNavigationRotation(const FRotator& Rotation) {
}

void AMercunaNavOctree::RebuildVolumes(const TArray<FBox>& Volumes, bool bStagedBuild, bool bRemoveUnseeded, bool bMergeVolumes) {
}

void AMercunaNavOctree::RebuildVolume(const AActor* Volume, bool StagedBuild, bool RemoveUnseeded) {
}

void AMercunaNavOctree::RebuildChanges(bool StagedBuild, bool RemoveUnseeded) {
}

void AMercunaNavOctree::Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit) {
}

void AMercunaNavOctree::IsReachableLatent(FVector Start, const TArray<FVector>& EndPos, float NavigationRadius, TArray<bool>& Result, TArray<FVector>& ClampedPos, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, bool AccuratePathLength, float StartSearchRadius, float EndSearchRadius) {
}

bool AMercunaNavOctree::IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength) {
    return false;
}

void AMercunaNavOctree::IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results) {
}

void AMercunaNavOctree::IsNavigable(FVector position, float NavigationRadius, bool& Result) {
}

bool AMercunaNavOctree::IsBuilding() const {
    return false;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathFromLocationToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathFromLocationToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathFromLocationToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* EndActor, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathFromActorToLocation(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathFromActorToActor(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathFromLocationToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathFromLocationToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathFromLocationToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* EndActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathFromActorToLocation(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathFromActorToActor(const FOnMercunaPathUpdated& OnPathUpdated, AActor* StartActor, AActor* EndActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

void AMercunaNavOctree::ClampToNavigable(FVector position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result) {
}

void AMercunaNavOctree::Build(const TArray<FVector>& PriorityPositions) {
}


