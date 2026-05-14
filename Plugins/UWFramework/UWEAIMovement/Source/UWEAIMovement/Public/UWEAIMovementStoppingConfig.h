#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementStoppingConfig.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementStoppingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SlowDownToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Guarantee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceZeroVelocity;
    
    UWEAIMOVEMENT_API FUWEAIMovementStoppingConfig();
};

