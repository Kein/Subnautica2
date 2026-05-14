#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementEnvironmentCache.h"
#include "UWEAIMovementStyleCache.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementStyleCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TerminalVelocityStoppingTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TerminalVelocityStoppingDistance;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, FUWEAIMovementEnvironmentCache> EnvironmentCache;
    
    UWEAIMOVEMENT_API FUWEAIMovementStyleCache();
};

