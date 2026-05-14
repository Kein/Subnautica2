#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementBaseCache.h"
#include "UWEAIMovementStyleCache.h"
#include "UWEAIMovementCache.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUWEAIMovementBaseCache BaseCache;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<FGameplayTag, FUWEAIMovementStyleCache> MovementStyles;
    
    UWEAI_API FUWEAIMovementCache();
};

