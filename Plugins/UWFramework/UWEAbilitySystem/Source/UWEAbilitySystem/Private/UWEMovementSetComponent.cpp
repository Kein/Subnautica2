#include "UWEMovementSetComponent.h"
#include "UWEMovementAttributeSet.h"

UUWEMovementSetComponent::UUWEMovementSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWEMovementAttributeSet::StaticClass();
}

void UUWEMovementSetComponent::SetRotationSpeedMultiplier(float NewValue) {
}

void UUWEMovementSetComponent::SetBaseWalkSpeed_Implementation(float Speed) {
}

void UUWEMovementSetComponent::SetBaseSwimSpeed_Implementation(float Speed) {
}

float UUWEMovementSetComponent::GetWaterCurrentTwistAngleMultiplier() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetWaterCurrentSpeedMultiplier() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetWaterCurrentCentricAngleMultiplier() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetRotationSpeedMultiplier() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetMaxWalkSpeed() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetMaxSwimSpeed() const {
    return 0.0f;
}

float UUWEMovementSetComponent::GetBaseWalkSpeed() {
    return 0.0f;
}

float UUWEMovementSetComponent::GetBaseSwimSpeed() {
    return 0.0f;
}


