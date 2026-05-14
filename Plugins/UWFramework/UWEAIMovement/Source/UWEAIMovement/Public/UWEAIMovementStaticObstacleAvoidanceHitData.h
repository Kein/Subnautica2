#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementStaticObstacleAvoidanceHitData.generated.h"

class UUWEAIMovementSurfaceData;

USTRUCT()
struct FUWEAIMovementStaticObstacleAvoidanceHitData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEAIMovementSurfaceData> HitSurfaceData;
    
    UWEAIMOVEMENT_API FUWEAIMovementStaticObstacleAvoidanceHitData();
};

