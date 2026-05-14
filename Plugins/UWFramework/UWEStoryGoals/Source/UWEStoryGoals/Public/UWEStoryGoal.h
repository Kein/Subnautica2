#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EStoryGoalTargetType.h"
#include "StoryGoalUnlock.h"
#include "UWEStoryGoal.generated.h"

class AActor;
class UUWEDialogueStoryEvent;
class UUWENotificationStoryEvent;
class UUWEStoryGoalRule;
class UUWETagStoryEvent;

UCLASS()
class UWESTORYGOALS_API UUWEStoryGoal : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStoryGoalTargetType StoryGoalType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FStoryGoalUnlock> StoryGoalUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* UnlockingRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UnlockOnRequirementsMet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEDialogueStoryEvent* TriggeredDialogue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWENotificationStoryEvent* TriggeredNotification;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWETagStoryEvent* TriggeredTagStoryEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag StoryGroupTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> PlayerCurrencyRewards;
    
    UUWEStoryGoal();

    UFUNCTION(BlueprintPure)
    bool IsUnlockingRequirementsSatisfied(AActor* Actor) const;
    
};

