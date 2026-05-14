#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementEnvironmentCache.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementEnvironmentCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MaxTerminalVelocityMagnitude;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MaxForceMagnitude;
    
    UWEAIMOVEMENT_API FUWEAIMovementEnvironmentCache();
};

