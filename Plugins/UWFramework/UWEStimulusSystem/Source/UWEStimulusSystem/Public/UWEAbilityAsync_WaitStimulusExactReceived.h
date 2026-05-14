#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityAsync_WaitStimulus.h"
#include "UWEAbilityAsync_WaitStimulusExactReceived.generated.h"

class AActor;

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEAbilityAsync_WaitStimulusExactReceived : public UUWEAbilityAsync_WaitStimulus {
    GENERATED_BODY()
public:
    UUWEAbilityAsync_WaitStimulusExactReceived();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityAsync_WaitStimulus* WaitStimulusExactReceivedForActor(AActor* TargetActor, FGameplayTagContainer StimulusTypeTags, bool TriggerOnce);
    
};

