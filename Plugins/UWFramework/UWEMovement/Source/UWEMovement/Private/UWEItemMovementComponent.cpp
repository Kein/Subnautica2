#include "UWEItemMovementComponent.h"

UUWEItemMovementComponent::UUWEItemMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumeTrackerComponent = NULL;
    this->Buoyancy = 0.00f;
    this->AirFriction = 0.50f;
    this->WaterFriction = 0.60f;
    this->UnderwaterGravityZ = 150.00f;
}

void UUWEItemMovementComponent::WakeUpAbove() {
}

void UUWEItemMovementComponent::WakeUp() {
}

bool UUWEItemMovementComponent::IsSettled() const {
    return false;
}


