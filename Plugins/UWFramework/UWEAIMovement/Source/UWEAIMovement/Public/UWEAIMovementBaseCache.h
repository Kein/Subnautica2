#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementEnvironmentCache.h"
#include "UWEAIMovementBaseCache.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementBaseCache {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FGameplayTag, FUWEAIMovementEnvironmentCache> EnvironmentCache;
    
    UWEAIMOVEMENT_API FUWEAIMovementBaseCache();
};

