#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUWEStaticObstacleAvoidanceTraceDirection.h"
#include "UWEStaticObstacleAvoidanceTraceSettings.generated.h"

USTRUCT(BlueprintType)
struct UWEAIMOVEMENT_API FUWEStaticObstacleAvoidanceTraceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEStaticObstacleAvoidanceTraceDirection DirectionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2f StartPointRelativeOffset;
    
    FUWEStaticObstacleAvoidanceTraceSettings();
};

