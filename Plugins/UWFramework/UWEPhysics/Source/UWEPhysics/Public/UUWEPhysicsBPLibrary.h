#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "UUWEPhysicsBPLibrary.generated.h"

class AActor;
class UObject;
class UUWEChaosPhysicsController;

UCLASS(BlueprintType)
class UWEPHYSICS_API UUUWEPhysicsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUUWEPhysicsBPLibrary();

    UFUNCTION(BlueprintPure)
    static bool LineRetraceComplex(FHitResult InputHit, FHitResult& Hit, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintCallable)
    static UUWEChaosPhysicsController* GetOrAddPhysicsController(AActor* Target, bool bAddVolumeTracker);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool FindTeleportSpotAroundObstacle(const UObject* WorldContextObject, AActor* Target, AActor* Obstacle, bool TestOnlyObstacleRootCollision, bool TestCurrentTargetLocation, FVector& OutTeleportLocation, bool Debug);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ApproximateConeTrace(const UObject* WorldContextObject, const FVector& Start, const FVector& Direction, const float Distance, const float Angle, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<AActor*>& OutOverlappingActors, const TArray<AActor*>& ActorsToIgnore, const TArray<TEnumAsByte<EObjectTypeQuery>>& BlockingObjectTypes);
    
};

