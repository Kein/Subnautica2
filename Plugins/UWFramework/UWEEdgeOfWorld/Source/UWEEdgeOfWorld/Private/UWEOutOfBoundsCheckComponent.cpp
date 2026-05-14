#include "UWEOutOfBoundsCheckComponent.h"

UUWEOutOfBoundsCheckComponent::UUWEOutOfBoundsCheckComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutOfBoundsEffect = NULL;
    this->OutOfBoundsPeriodicCheckTime = 1.00f;
    this->OutOfBoundsNotificationWidget = NULL;
    this->EdgeOfWorldThanksNotificationWidget = NULL;
}

void UUWEOutOfBoundsCheckComponent::TriggerEdgeOfWorldCollision(AActor* Instigator) {
}

void UUWEOutOfBoundsCheckComponent::OnVolumeChanged(EVolumeType VolumeType) {
}

void UUWEOutOfBoundsCheckComponent::OnPlayerOverlapEnd(APawn* Player) {
}

void UUWEOutOfBoundsCheckComponent::OnPlayerOverlapBegin(APawn* Player) {
}

void UUWEOutOfBoundsCheckComponent::NotifyPlayerThanks_Implementation() {
}

void UUWEOutOfBoundsCheckComponent::NotifyPlayerOutOfBounds_Implementation() {
}


