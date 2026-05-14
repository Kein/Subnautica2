#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitHeldItemChanged.generated.h"

class AUWEBaseItem;
class UGameplayAbility;
class USN2AbilityTask_WaitHeldItemChanged;
class UUWEEquipmentComponent;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitHeldItemChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeldItemChanged, AUWEBaseItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFailed, AUWEBaseItem*, Item);
    
    UPROPERTY(BlueprintAssignable)
    FOnFailed OnFailed;
    
    UPROPERTY(BlueprintAssignable)
    FOnHeldItemChanged OnHeldItem;
    
private:
    UPROPERTY(Instanced)
    UUWEEquipmentComponent* EquipmentComponent;
    
    UPROPERTY()
    AUWEBaseItem* PriorHeldTool;
    
public:
    USN2AbilityTask_WaitHeldItemChanged();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitHeldItemChanged* WaitHeldItemChanged(UGameplayAbility* OwningAbility, bool TriggerIfSetOnStart, bool OnlyOnce);
    
private:
    UFUNCTION()
    void OnEquippedChanged();
    
};

