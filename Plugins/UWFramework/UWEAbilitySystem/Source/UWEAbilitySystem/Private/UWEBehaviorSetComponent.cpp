#include "UWEBehaviorSetComponent.h"
#include "UWEBehaviorAttributeSet.h"

UUWEBehaviorSetComponent::UUWEBehaviorSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWEBehaviorAttributeSet::StaticClass();
}

void UUWEBehaviorSetComponent::SetTemper(float Temper) {
}

void UUWEBehaviorSetComponent::SetStamina(float Stamina) {
}

void UUWEBehaviorSetComponent::SetMaxTemper(float MaxTemper) {
}

void UUWEBehaviorSetComponent::SetMaxStamina(float MaxStamina) {
}

void UUWEBehaviorSetComponent::SetMaxInfection(float MaxInfection) {
}

void UUWEBehaviorSetComponent::SetInfection(float Infection) {
}

float UUWEBehaviorSetComponent::GetTemper() const {
    return 0.0f;
}

float UUWEBehaviorSetComponent::GetStamina() const {
    return 0.0f;
}

float UUWEBehaviorSetComponent::GetNormalizedTemper() const {
    return 0.0f;
}

float UUWEBehaviorSetComponent::GetNormalizedStamina() const {
    return 0.0f;
}

float UUWEBehaviorSetComponent::GetNormalizedInfection() const {
    return 0.0f;
}

float UUWEBehaviorSetComponent::GetInfection() const {
    return 0.0f;
}


