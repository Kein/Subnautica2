#include "UWECelestialBodyComponent.h"

UUWECelestialBodyComponent::UUWECelestialBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AxialRotationPeriodSeconds = 3.00f;
    this->AxialRotationPhaseSeconds = 0.00f;
    this->OrbitPeriodSeconds = 30.00f;
    this->OrbitPhaseSeconds = 0.00f;
    this->OrbitRadius = 150.00f;
    this->bPrimaryCelestialBody = false;
    this->ComponentProxy = NULL;
}

bool UUWECelestialBodyComponent::HasParentComponent() const {
    return false;
}


