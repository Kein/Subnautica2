#include "UWESaveComponent.h"

UUWESaveComponent::UUWESaveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollectDataOnSave = false;
    this->ComponentIsOnPlayer = EUWESaveComponentIsOnPlayer::None;
    this->SaveHandleForOwningActor = NULL;
}

void UUWESaveComponent::Store() {
}


