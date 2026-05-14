#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Async/AbilityAsync.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityAsync_WaitStimulus.generated.h"

class AActor;

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEAbilityAsync_WaitStimulus : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStimulusReceivedDelegate, FGameplayTag, StimulusTag, AActor*, SourceActor, FVector, Location);
    
    UPROPERTY(BlueprintAssignable)
    FOnStimulusReceivedDelegate OnStimulusReceived;
    
    UUWEAbilityAsync_WaitStimulus();

};

