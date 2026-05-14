#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEUnlockStoryGoalAction.generated.h"

class UUWEStoryGoal;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEUnlockStoryGoalAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoal;
    
public:
    UUWEUnlockStoryGoalAction(const FObjectInitializer& ObjectInitializer);

};

