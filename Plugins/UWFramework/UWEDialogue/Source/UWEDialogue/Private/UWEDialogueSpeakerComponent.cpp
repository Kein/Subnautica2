#include "UWEDialogueSpeakerComponent.h"

UUWEDialogueSpeakerComponent::UUWEDialogueSpeakerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Current2DDialogue = NULL;
}

void UUWEDialogueSpeakerComponent::SkipCurrentLine() {
}

void UUWEDialogueSpeakerComponent::OnPlayingLineCompleted() {
}


