#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "EnergyDepletedDelegateDelegate.h"
#include "SN2AbilityTask_WaitEnergyDepleted.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitEnergyDepleted;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitEnergyDepleted : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnergyDepletedDelegate OnDepleted;
    
    USN2AbilityTask_WaitEnergyDepleted();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitEnergyDepleted* WaitEnergyDepleted(UGameplayAbility* OwningAbility);
    
};

