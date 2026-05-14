#include "UWEPDAVOPlaybackPlayerStateComponent.h"

UUWEPDAVOPlaybackPlayerStateComponent::UUWEPDAVOPlaybackPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocalActiveDialogue = NULL;
}

void UUWEPDAVOPlaybackPlayerStateComponent::SkipCurrentDialogueLine_Implementation() {
}

void UUWEPDAVOPlaybackPlayerStateComponent::SkipCurrentDialogue_Implementation() {
}

void UUWEPDAVOPlaybackPlayerStateComponent::ServerTriggerEvent_Implementation(const TSoftObjectPtr<UUWEStoryEvent>& Event) {
}

void UUWEPDAVOPlaybackPlayerStateComponent::PlayAlert_Implementation(FDialogueInfo Dialogue) {
}

TArray<FDialogueInfo> UUWEPDAVOPlaybackPlayerStateComponent::GetDialogueQueue() const {
    return TArray<FDialogueInfo>();
}

TArray<UUWEDialogueSequence*> UUWEPDAVOPlaybackPlayerStateComponent::GetActiveDialogueSequences() {
    return TArray<UUWEDialogueSequence*>();
}

void UUWEPDAVOPlaybackPlayerStateComponent::EndActiveDialogue_Implementation() {
}

void UUWEPDAVOPlaybackPlayerStateComponent::ClientQueueUpDialogue_Implementation(FDialogueInfo Dialogue) {
}

void UUWEPDAVOPlaybackPlayerStateComponent::ClearAllQueuedDialogue_Implementation() {
}


