#include "SphereVolumeComponent.h"

USphereVolumeComponent::USphereVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereRadius = 50.00f;
}

void USphereVolumeComponent::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
}

float USphereVolumeComponent::GetUnscaledSphereRadius() const {
    return 0.0f;
}

float USphereVolumeComponent::GetShapeScale() const {
    return 0.0f;
}

float USphereVolumeComponent::GetScaledSphereRadius() const {
    return 0.0f;
}


