#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWEAbilityTask_WaitFloatValue.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitFloatValue;

UCLASS()
class UWEABILITYTASK_API UUWEAbilityTask_WaitFloatValue : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWEFloatValueDelegate, float, FloatValue);
    
    UPROPERTY(BlueprintAssignable)
    FUWEFloatValueDelegate OnFloatValue;
    
    UUWEAbilityTask_WaitFloatValue();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitFloatValue* WaitFloatValue(UGameplayAbility* OwningAbility, const float InFloatValue, FName TaskInstanceName);
    
};

