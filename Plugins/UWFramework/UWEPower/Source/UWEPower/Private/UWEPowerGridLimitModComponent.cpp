#include "UWEPowerGridLimitModComponent.h"

UUWEPowerGridLimitModComponent::UUWEPowerGridLimitModComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProximityTransmissionEnabled = false;
    this->PowerGridMod = 100.00f;
}

float UUWEPowerGridLimitModComponent::GetPowerGridMod() const {
    return 0.0f;
}


