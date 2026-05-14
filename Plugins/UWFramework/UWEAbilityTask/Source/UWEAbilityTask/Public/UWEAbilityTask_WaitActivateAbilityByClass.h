#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityTask_WaitActivateAbilityByClass.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UUWEAbilityTask_WaitActivateAbilityByClass;

UCLASS()
class UWEABILITYTASK_API UUWEAbilityTask_WaitActivateAbilityByClass : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityActivateDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FAbilityActivateDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityActivateDelegate OnCancelled;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityActivateDelegate OnFailed;
    
private:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* TargetASC;
    
public:
    UUWEAbilityTask_WaitActivateAbilityByClass();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitActivateAbilityByClass* WaitActivateAbilityByClass(UGameplayAbility* OwningAbility, TSubclassOf<UGameplayAbility> InAbilityToActivate, AActor* InActor, bool bInPredicted);
    
};

