#include "SN2SustainedHoverComponent.h"

USN2SustainedHoverComponent::USN2SustainedHoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoverTimeToTrigger = 1.00f;
    this->TickRate = 0.20f;
    this->MaxHoverDistance = 400.00f;
}

void USN2SustainedHoverComponent::OnHoverTargetChanged(FUWETargetActor OldHoverTarget, FUWETargetActor NewHoverTarget) {
}

void USN2SustainedHoverComponent::CheckHoveredActor() {
}


