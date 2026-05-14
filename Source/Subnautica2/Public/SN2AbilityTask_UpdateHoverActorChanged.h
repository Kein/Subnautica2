#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWETargetActor.h"
#include "HoverActorChangedDelegateDelegate.h"
#include "SN2AbilityTask_UpdateHoverActorChanged.generated.h"

class UGameplayAbility;
class USN2AbilityTask_UpdateHoverActorChanged;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateHoverActorChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHoverActorChangedDelegate OnChanged;
    
    USN2AbilityTask_UpdateHoverActorChanged();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateHoverActorChanged* UpdateHoverActorChanged(UGameplayAbility* OwningAbility, bool bTriggerInitially);
    
protected:
    UFUNCTION()
    void OnHoverActorChangedCallback(FUWETargetActor OldHoverTarget, FUWETargetActor NewHoverTarget);
    
};

