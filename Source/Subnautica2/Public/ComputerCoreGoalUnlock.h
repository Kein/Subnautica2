#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComputerCoreGoalUnlock.generated.h"

USTRUCT()
struct FComputerCoreGoalUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RequiredGoalPool;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumRequiredFromPool;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer StoryGoalsToUnlock;
    
    SUBNAUTICA2_API FComputerCoreGoalUnlock();
};

