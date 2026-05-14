#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityAsync_WaitStimulus.h"
#include "UWEAbilityAsync_WaitStimulusReceived.generated.h"

class AActor;

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEAbilityAsync_WaitStimulusReceived : public UUWEAbilityAsync_WaitStimulus {
    GENERATED_BODY()
public:
    UUWEAbilityAsync_WaitStimulusReceived();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityAsync_WaitStimulus* WaitStimulusReceivedForActor(AActor* TargetActor, FGameplayTagContainer StimulusTypeTags, bool TriggerOnce);
    
};

