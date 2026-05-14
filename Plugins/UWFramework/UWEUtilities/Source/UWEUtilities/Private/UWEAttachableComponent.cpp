#include "UWEAttachableComponent.h"

UUWEAttachableComponent::UUWEAttachableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedTo = NULL;
}

void UUWEAttachableComponent::SetAttachedTo(AActor* NewAttachedTo, bool ForceBroadcast) {
}


