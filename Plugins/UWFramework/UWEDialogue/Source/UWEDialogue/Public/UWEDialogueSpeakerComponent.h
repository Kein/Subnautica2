#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "UWEFMODAudioComponent.h"
#include "DialoguePlaybackInfo.h"
#include "UWEDialogueSpeakerComponent.generated.h"

class UAudioComponent;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDIALOGUE_API UUWEDialogueSpeakerComponent : public UUWEFMODAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FDialoguePlaybackInfo PlayingDialogue;
    
    UPROPERTY()
    FTimerHandle LineTimerHandle;
    
    UPROPERTY(Instanced)
    UAudioComponent* Current2DDialogue;
    
public:
    UUWEDialogueSpeakerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SkipCurrentLine();
    
protected:
    UFUNCTION()
    void OnPlayingLineCompleted();
    
};

