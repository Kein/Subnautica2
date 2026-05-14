#pragma once
#include "CoreMinimal.h"
#include "UWEScanTrait.h"
#include "UWEScanStep.generated.h"

class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FUWEScanStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StepNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UUWEStoryGoal*> StoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTriggerStoryGoalsOnLaterSteps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEScanTrait Trait;
    
    UWESCANNER_API FUWEScanStep();
};

