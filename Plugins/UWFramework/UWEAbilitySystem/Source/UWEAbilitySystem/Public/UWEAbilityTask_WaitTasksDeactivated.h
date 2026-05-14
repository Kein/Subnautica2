#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWEAbilityTask_WaitTasksDeactivated.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitTasksDeactivated;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_WaitTasksDeactivated : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTasksEnded);
    
    UPROPERTY(BlueprintAssignable)
    FTasksEnded OnTasksDeactivated;
    
    UUWEAbilityTask_WaitTasksDeactivated();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitTasksDeactivated* WaitTasksDeactivated(UGameplayAbility* OwningAbility, FName FilterName);
    
private:
    UFUNCTION()
    void OnTaskDeactivated();
    
};

