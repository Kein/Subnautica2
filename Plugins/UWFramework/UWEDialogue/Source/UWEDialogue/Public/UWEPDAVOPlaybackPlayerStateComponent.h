#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueInfo.h"
#include "UWEPDAVOPlaybackPlayerStateComponent.generated.h"

class UUWEActiveDialogueComponent;
class UUWEDialogueSequence;
class UUWEStoryEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDIALOGUE_API UUWEPDAVOPlaybackPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FDialogueInfo> QueuedDialogues;
    
    UPROPERTY(Instanced)
    TArray<UUWEActiveDialogueComponent*> LocalActiveAlerts;
    
    UPROPERTY(Instanced)
    UUWEActiveDialogueComponent* LocalActiveDialogue;
    
public:
    UUWEPDAVOPlaybackPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Client, Reliable)
    void SkipCurrentDialogueLine();
    
    UFUNCTION(Client, Reliable)
    void SkipCurrentDialogue();
    
    UFUNCTION(Reliable, Server)
    void ServerTriggerEvent(const TSoftObjectPtr<UUWEStoryEvent>& Event);
    
    UFUNCTION(Client, Reliable)
    void PlayAlert(FDialogueInfo Dialogue);
    
    UFUNCTION(BlueprintPure)
    TArray<FDialogueInfo> GetDialogueQueue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UUWEDialogueSequence*> GetActiveDialogueSequences();
    
    UFUNCTION(Client, Reliable)
    void EndActiveDialogue();
    
    UFUNCTION(Client, Reliable)
    void ClientQueueUpDialogue(FDialogueInfo Dialogue);
    
    UFUNCTION(Client, Reliable)
    void ClearAllQueuedDialogue();
    
};

