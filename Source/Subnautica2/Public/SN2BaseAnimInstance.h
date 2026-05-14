#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "SN2BaseAnimInstance.generated.h"

UCLASS(NonTransient)
class SUBNAUTICA2_API USN2BaseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
    
public:
    USN2BaseAnimInstance();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAscReady();
    
};

