#include "UWEInteractComponent.h"

UUWEInteractComponent::UUWEInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UWEMaxHoverTargetMeters = 50;
    this->UWEMaxHoverTargetCapsuleHeightMeters = 10;
    this->UWEMaxDebugHoverTargetMeters = 1000;
    this->ForcedHoverTargetActor = NULL;
}

void UUWEInteractComponent::UpdateSelectedTargetOnServer_Implementation(AActor* InTarget) {
}

void UUWEInteractComponent::UpdateHoverTargetOnServer_Implementation(FUWETargetActor InHoverTarget) {
}

void UUWEInteractComponent::SetSelectedFromHoverTarget() {
}

void UUWEInteractComponent::Server_Interact_Implementation(FUWETargetActor Target) {
}

void UUWEInteractComponent::Interact_Internal(FUWETargetActor Target) {
}

AActor* UUWEInteractComponent::GetSelectedTargetActor() {
    return NULL;
}

FUWETargetActor UUWEInteractComponent::GetHoverTarget() {
    return FUWETargetActor{};
}


