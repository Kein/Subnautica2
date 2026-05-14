#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "EnergyRestoredDelegateDelegate.h"
#include "SN2AbilityTask_WaitEnergyRestored.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitEnergyRestored;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitEnergyRestored : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnergyRestoredDelegate OnRestored;
    
    USN2AbilityTask_WaitEnergyRestored();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitEnergyRestored* WaitEnergyRestored(UGameplayAbility* OwningAbility);
    
};

