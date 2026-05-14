#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWEAbilityTask_WaitTagRequirementsFailed.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitTagRequirementsFailed;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_WaitTagRequirementsFailed : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRequiredTagsFailed);
    
    UPROPERTY(BlueprintAssignable)
    FRequiredTagsFailed OnTagRequirementsFailed;
    
    UUWEAbilityTask_WaitTagRequirementsFailed();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitTagRequirementsFailed* WaitTagRequirementsFailed(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

