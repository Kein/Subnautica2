#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSApplyStimulusEffect.generated.h"

class UGameplayEffect;

UCLASS()
class UWEAI_API UUWEBTSApplyStimulusEffect : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer StimulusTags;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotRemoveEffect;
    
    UUWEBTSApplyStimulusEffect();

};

