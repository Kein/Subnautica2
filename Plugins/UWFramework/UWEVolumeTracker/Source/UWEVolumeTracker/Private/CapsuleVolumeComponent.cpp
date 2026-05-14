#include "CapsuleVolumeComponent.h"

UCapsuleVolumeComponent::UCapsuleVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CapsuleHalfHeight = 50.00f;
    this->CapsuleRadius = 25.00f;
}

void UCapsuleVolumeComponent::SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps) {
}

void UCapsuleVolumeComponent::SetCapsuleRadius(float Radius, bool bUpdateOverlaps) {
}

void UCapsuleVolumeComponent::SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps) {
}

float UCapsuleVolumeComponent::GetScaledCapsuleRadius() const {
    return 0.0f;
}

float UCapsuleVolumeComponent::GetScaledCapsuleHalfHeight() const {
    return 0.0f;
}


