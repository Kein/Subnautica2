#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AttributeSet.h"
#include "SN2AbilityTask_WaitAttributeGain.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;
class USN2AbilityTask_WaitAttributeGain;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitAttributeGain : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFailed, float, AttributeValueLost, float, NewAttributeValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeLoss, float, AttributeValueLost, float, NewAttributeValue);
    
    UPROPERTY(BlueprintAssignable)
    FOnFailed OnFailed;
    
    UPROPERTY(BlueprintAssignable)
    FOnAttributeLoss OnAttributeGain;
    
private:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ASC;
    
public:
    USN2AbilityTask_WaitAttributeGain();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitAttributeGain* WaitAttributeGain(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, bool OnlyOnce, float MinChange);
    
};

