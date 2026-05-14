#pragma once
#include "CoreMinimal.h"
#include "UWEAIAwarenessParameters.generated.h"

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAIAwarenessParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AccelerationAwarenessPerSecond;
    
    UPROPERTY(EditAnywhere)
    float DecelerationAwarenessPerSecond;
    
    UPROPERTY(EditAnywhere)
    bool ContributesToGlobalPlayerAwareness;
    
    FUWEAIAwarenessParameters();
};

