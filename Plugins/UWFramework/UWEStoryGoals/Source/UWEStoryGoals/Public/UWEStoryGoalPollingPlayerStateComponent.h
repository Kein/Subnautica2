#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEStoryGoalPollingPlayerStateComponent.generated.h"

class UUWEStoryGoal;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTORYGOALS_API UUWEStoryGoalPollingPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UUWEStoryGoal*> AutoUnlockableStoryGoals;
    
public:
    UUWEStoryGoalPollingPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void PollStoryGoals();
    
};

