#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "UWEGenericAbilityActorData.h"
#include "UWEGameplayAbilityTargetData_Generic.generated.h"

USTRUCT(BlueprintType)
struct UWEABILITYTASK_API FUWEGameplayAbilityTargetData_Generic : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWEGenericAbilityActorData GenericValue;
    
    FUWEGameplayAbilityTargetData_Generic();
};

