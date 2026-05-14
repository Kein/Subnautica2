#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnStoryGoalEventTriggeredDelegate.h"
#include "OnStoryGoalsChangedDelegate.h"
#include "UWEPendingStoryGoalUnlock.h"
#include "UWETimedStoryGoalSequence.h"
#include "UWEStoryGoalsWorldSubsystem.generated.h"

class AActor;
class UUWESaveHandle;
class UUWEStoryGoal;
class UUWETimedStoryGoalSequenceDataAsset;

UCLASS(BlueprintType)
class UWESTORYGOALS_API UUWEStoryGoalsWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStoryGoalEventTriggered OnStoryGoalUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FOnStoryGoalsChanged OnStoryGoalsChanged;
    
protected:
    UPROPERTY(SaveGame)
    TArray<FUWEPendingStoryGoalUnlock> PendingUnlocks;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY()
    TOptional<FUWETimedStoryGoalSequence> CurrentTimedStoryGoalSequence;
    
public:
    UUWEStoryGoalsWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockStoryGoal(UUWEStoryGoal* StoryGoal, AActor* InitTarget, bool IgnorePrerequisites);
    
    UFUNCTION(BlueprintCallable)
    void StopTimedStoryGoalSequence(UUWETimedStoryGoalSequenceDataAsset* sequence);
    
    UFUNCTION(BlueprintCallable)
    void StartTimedStoryGoalSequence(UUWETimedStoryGoalSequenceDataAsset* sequence);
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEStoryGoalsWorldSubsystem, STATGROUP_Tickables); }
};

