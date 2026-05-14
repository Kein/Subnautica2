#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "UWEAimTransform.h"
#include "UWEGameplayAbilityTargetData_AimTransform.generated.h"

USTRUCT()
struct UWEABILITYTASK_API FUWEGameplayAbilityTargetData_AimTransform : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWEAimTransform AimTransform;
    
    FUWEGameplayAbilityTargetData_AimTransform();
};

