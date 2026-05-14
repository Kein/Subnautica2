#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "OnCantAffordConstructionDelegate.h"
#include "SN2AbilityTask_WaitCantAffordConstruction.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitCantAffordConstruction;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitCantAffordConstruction : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCantAffordConstruction OnCantAfford;
    
    USN2AbilityTask_WaitCantAffordConstruction();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitCantAffordConstruction* WaitCantAffordConstruction(UGameplayAbility* OwningAbility);
    
protected:
    UFUNCTION()
    void OnCantAffordConstruction();
    
};

