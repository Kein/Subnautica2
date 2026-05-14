#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_UpdateTick.generated.h"

class UGameplayAbility;
class USN2AbilityTask_UpdateTick;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateTick : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTickTaskDelegate, float, DeltaTime);
    
    UPROPERTY(BlueprintAssignable)
    FTickTaskDelegate OnTick;
    
    USN2AbilityTask_UpdateTick();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateTick* UpdateTick(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintPure)
    float GetTotalUptimeInSeconds() const;
    
};

