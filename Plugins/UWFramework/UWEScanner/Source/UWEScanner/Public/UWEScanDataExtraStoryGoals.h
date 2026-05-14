#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEScanDataExtraStoryGoals.generated.h"

class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FUWEScanDataExtraStoryGoals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoalToFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag RequiredTagToUnlock;
    
    UWESCANNER_API FUWEScanDataExtraStoryGoals();
};

