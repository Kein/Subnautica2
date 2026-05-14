#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "ScheduledStoryGoal.h"
#include "UWEStoryGoalSchedule.generated.h"

UCLASS()
class UWESTORYGOALS_API UUWEStoryGoalSchedule : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FScheduledStoryGoal> ScheduledStoryGoals;
    
    UUWEStoryGoalSchedule();

};

