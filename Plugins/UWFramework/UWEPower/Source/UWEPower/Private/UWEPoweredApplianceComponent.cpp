#include "UWEPoweredApplianceComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPoweredApplianceComponent::UUWEPoweredApplianceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProximityTransmissionEnabled = false;
    this->OverridePower = false;
    this->ContinuousPowerDrain = 0.00f;
    this->IsOn = true;
    this->IsPowered = false;
}

bool UUWEPoweredApplianceComponent::TryConsumePowerInstant(float Amount) {
    return false;
}

void UUWEPoweredApplianceComponent::ToggleIsOn() {
}

void UUWEPoweredApplianceComponent::SetIsPowered(bool Powered) {
}

void UUWEPoweredApplianceComponent::SetIsOn(bool On) {
}

void UUWEPoweredApplianceComponent::SetContinuousPowerDrain(const float PowerDrain) {
}

void UUWEPoweredApplianceComponent::OnRep_IsPowered() {
}

bool UUWEPoweredApplianceComponent::GetIsPowered() const {
    return false;
}

float UUWEPoweredApplianceComponent::GetContinuousPowerDrain() const {
    return 0.0f;
}

bool UUWEPoweredApplianceComponent::CanConsumePowerInstant(float Amount) const {
    return false;
}

void UUWEPoweredApplianceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPoweredApplianceComponent, IsPowered);
}


