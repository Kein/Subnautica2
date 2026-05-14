#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "UWEMiniGameCompletion.h"
#include "UWEGameplayAbilityTargetData_MiniGameCompletionResult.generated.h"

USTRUCT()
struct UWEDYNAMICRESOURCES_API FUWEGameplayAbilityTargetData_MiniGameCompletionResult : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWEMiniGameCompletion CompletionResult;
    
    FUWEGameplayAbilityTargetData_MiniGameCompletionResult();
};

