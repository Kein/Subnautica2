#pragma once
#include "CoreMinimal.h"
#include "StoryGoalUnlock.generated.h"

class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FStoryGoalUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* GoalToUnlockRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DelayTime;
    
    UWESTORYGOALS_API FStoryGoalUnlock();
};

