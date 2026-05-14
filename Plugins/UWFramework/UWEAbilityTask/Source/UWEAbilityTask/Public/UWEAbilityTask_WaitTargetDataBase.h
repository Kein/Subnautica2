#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityTask_WaitTargetDataBase.generated.h"

class AGameplayAbilityTargetActor;

UCLASS(Abstract)
class UWEABILITYTASK_API UUWEAbilityTask_WaitTargetDataBase : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGameplayAbilityTargetActor* TargetActor;
    
public:
    UUWEAbilityTask_WaitTargetDataBase();

protected:
    UFUNCTION()
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION()
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION()
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
};

