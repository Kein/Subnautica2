#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "UWEMiniGameCompletion.h"
#include "UWEGameplayAbilityTargetActor_MiniGameCompletionResult.generated.h"

UCLASS()
class UWEDYNAMICRESOURCES_API AUWEGameplayAbilityTargetActor_MiniGameCompletionResult : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEMiniGameCompletion CachedCompletionResult;
    
    AUWEGameplayAbilityTargetActor_MiniGameCompletionResult(const FObjectInitializer& ObjectInitializer);

};

