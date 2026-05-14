#pragma once
#include "CoreMinimal.h"
#include "UWEStoryEvent.h"
#include "UWEStoryGoalStoryEvent.generated.h"

class UUWEStoryGoal;

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalStoryEvent : public UUWEStoryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UUWEStoryGoal* StoryGoalToUnlockRef;
    
    UUWEStoryGoalStoryEvent();

};

