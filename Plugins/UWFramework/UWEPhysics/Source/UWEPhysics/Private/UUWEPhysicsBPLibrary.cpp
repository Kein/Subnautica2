#include "UUWEPhysicsBPLibrary.h"

UUUWEPhysicsBPLibrary::UUUWEPhysicsBPLibrary() {
}

bool UUUWEPhysicsBPLibrary::LineRetraceComplex(FHitResult InputHit, FHitResult& Hit, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return false;
}

UUWEChaosPhysicsController* UUUWEPhysicsBPLibrary::GetOrAddPhysicsController(AActor* Target, bool bAddVolumeTracker) {
    return NULL;
}

bool UUUWEPhysicsBPLibrary::FindTeleportSpotAroundObstacle(const UObject* WorldContextObject, AActor* Target, AActor* Obstacle, bool TestOnlyObstacleRootCollision, bool TestCurrentTargetLocation, FVector& OutTeleportLocation, bool Debug) {
    return false;
}

bool UUUWEPhysicsBPLibrary::ApproximateConeTrace(const UObject* WorldContextObject, const FVector& Start, const FVector& Direction, const float Distance, const float Angle, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*>& OutOverlappingActors, const TArray<AActor*>& ActorsToIgnore, const TArray<TEnumAsByte<EObjectTypeQuery>>& BlockingObjectTypes) {
    return false;
}


