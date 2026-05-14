#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitHealthLoss.generated.h"

class AActor;
class UGameplayAbility;
class USN2AbilityTask_WaitHealthLoss;
class UUWEHealthSetComponent;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitHealthLoss : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthLoss, float, HealthLost, float, NewHealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFailed, float, HealthLost, float, NewHealth);
    
    UPROPERTY(BlueprintAssignable)
    FOnFailed OnFailed;
    
    UPROPERTY(BlueprintAssignable)
    FOnHealthLoss OnHealthLoss;
    
private:
    UPROPERTY(Instanced)
    UUWEHealthSetComponent* HealthComponent;
    
public:
    USN2AbilityTask_WaitHealthLoss();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitHealthLoss* WaitHealthLoss(UGameplayAbility* OwningAbility, bool OnlyOnce);
    
private:
    UFUNCTION()
    void OnHealthChanged(AActor* SourceActor, AActor* TargetActor, float OldHealth, float NewHealth);
    
};

