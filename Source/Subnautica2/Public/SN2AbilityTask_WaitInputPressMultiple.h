#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "InputPressMultipleDelegateDelegate.h"
#include "SN2AbilityTask_WaitInputPressMultiple.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitInputPressMultiple;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitInputPressMultiple : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInputPressMultipleDelegate OnPress;
    
    USN2AbilityTask_WaitInputPressMultiple();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitInputPressMultiple* WaitInputPressMultiple(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
    
    UFUNCTION()
    void OnPressCallback();
    
};

