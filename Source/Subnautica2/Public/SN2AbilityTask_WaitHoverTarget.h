#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "WaitHoverTargetUsingActorDelegateDelegate.h"
#include "SN2AbilityTask_WaitHoverTarget.generated.h"

class AGameplayAbilityTargetActor;
class UGameplayAbility;
class USN2AbilityTask_WaitHoverTarget;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitHoverTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitHoverTargetUsingActorDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FWaitHoverTargetUsingActorDelegate Cancelled;
    
protected:
    UPROPERTY()
    AGameplayAbilityTargetActor* TargetActor;
    
public:
    USN2AbilityTask_WaitHoverTarget();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitHoverTarget* WaitHoverTargetSynced(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION()
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION()
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
};

