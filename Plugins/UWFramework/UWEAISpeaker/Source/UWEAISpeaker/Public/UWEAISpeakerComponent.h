#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAISpeakerComponent.generated.h"

class AUWESpeaker;
class UFMODEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAISPEAKER_API UUWEAISpeakerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<AUWESpeaker>> Speakers;
    
public:
    UUWEAISpeakerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlaySoundQueued(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(UFMODEvent* Event);
    
};

