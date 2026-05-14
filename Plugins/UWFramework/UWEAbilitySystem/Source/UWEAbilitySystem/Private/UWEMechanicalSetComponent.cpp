#include "UWEMechanicalSetComponent.h"
#include "UWEMechanicalAttributeSet.h"

UUWEMechanicalSetComponent::UUWEMechanicalSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWEMechanicalAttributeSet::StaticClass();
    this->VolumeTracker = NULL;
}

void UUWEMechanicalSetComponent::SetScanSpeedScalar(float Val) {
}

void UUWEMechanicalSetComponent::SetMaxEnergy(float NewValue) {
}

void UUWEMechanicalSetComponent::SetEnergyModifier(float NewValue) {
}

void UUWEMechanicalSetComponent::SetEnergy(float NewValue) {
}

float UUWEMechanicalSetComponent::GetScanSpeedScalar() const {
    return 0.0f;
}

float UUWEMechanicalSetComponent::GetRepairSpeedScalar() const {
    return 0.0f;
}

float UUWEMechanicalSetComponent::GetNormalizedEnergy() const {
    return 0.0f;
}

float UUWEMechanicalSetComponent::GetMaxEnergy() const {
    return 0.0f;
}

float UUWEMechanicalSetComponent::GetEnergy() const {
    return 0.0f;
}

float UUWEMechanicalSetComponent::GetCrushDepth() const {
    return 0.0f;
}

void UUWEMechanicalSetComponent::ConsumeEnergy(float EnergyToConsume) {
}

void UUWEMechanicalSetComponent::AddEnergy(float EnergyToAdd) {
}


