#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "UWEMiniGameCompletion.h"
#include "WaitMiniGameCompletionDelegateDelegate.h"
#include "UWEAbilityTask_WaitMiniGameCompleted.generated.h"

class AGameplayAbilityTargetActor;
class UGameplayAbility;
class UUWEAbilityTask_WaitMiniGameCompleted;

UCLASS()
class UWEDYNAMICRESOURCES_API UUWEAbilityTask_WaitMiniGameCompleted : public UAbilityTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FWaitMiniGameCompletionDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FWaitMiniGameCompletionDelegate Cancelled;
    
protected:
    UPROPERTY()
    AGameplayAbilityTargetActor* TargetActor;
    
    UPROPERTY()
    FUWEMiniGameCompletion CompletionResult;
    
public:
    UUWEAbilityTask_WaitMiniGameCompleted();

private:
    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitMiniGameCompleted* WaitMiniGameCompleted(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void SetCompletionResult(FUWEMiniGameCompletion InCompletionResult);
    
    UFUNCTION()
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION()
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION()
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
};

