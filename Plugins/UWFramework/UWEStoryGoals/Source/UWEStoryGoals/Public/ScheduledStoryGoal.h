#pragma once
#include "CoreMinimal.h"
#include "ScheduledStoryGoal.generated.h"

class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FScheduledStoryGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* GoalToUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DelayTime;
    
    UWESTORYGOALS_API FScheduledStoryGoal();
};

