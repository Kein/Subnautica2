#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "UWEGameplayAbility.h"
#include "SN2TargetedAbility.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2TargetedAbility : public UUWEGameplayAbility {
    GENERATED_BODY()
public:
    USN2TargetedAbility();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BeginTargetInteract(const FGameplayAbilityTargetDataHandle& TargetData);
    
};

