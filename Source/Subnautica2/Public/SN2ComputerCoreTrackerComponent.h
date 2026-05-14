#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "SN2ComputerCoreTrackerComponent.generated.h"

class AActor;
class UUWEStoryGoal;
class UUWEStoryGoalSchedule;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ComputerCoreTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UUWEStoryGoalSchedule* TrackedGoalData;
    
    USN2ComputerCoreTrackerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* Target);
    
    UFUNCTION()
    void OnStoryGoalReady(UUWEStoryGoal* Goal);
    
    UFUNCTION()
    FTimerHandle GetStoryGoalTimerHandle(UUWEStoryGoal* StoryGoal);
    
};

