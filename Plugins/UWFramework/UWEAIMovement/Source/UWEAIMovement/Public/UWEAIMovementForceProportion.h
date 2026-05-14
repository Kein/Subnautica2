#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementForceProportion.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementForceProportion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float SpeedAlteration;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float MoveTo_General;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float MoveTo_Stopping;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float StaticObstacleAvoidance;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float Grouping;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float Pathfinding;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float Turning;
    
    UWEAIMOVEMENT_API FUWEAIMovementForceProportion();
};

