#include "UWEHealthSetComponent.h"
#include "UWEHealthAttributeSet.h"

UUWEHealthSetComponent::UUWEHealthSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWEHealthAttributeSet::StaticClass();
}

void UUWEHealthSetComponent::SetMaxHealth(float MaxHealth) {
}

void UUWEHealthSetComponent::SetHealth(float Health) {
}

void UUWEHealthSetComponent::SetDamageMultiplier(float DamageMultiplier) {
}

void UUWEHealthSetComponent::SetDamage(float Damage) {
}

void UUWEHealthSetComponent::RestoreHealth() {
}

void UUWEHealthSetComponent::Kill() {
}

bool UUWEHealthSetComponent::IsAlive() const {
    return false;
}

float UUWEHealthSetComponent::GetNormalizedHealth() const {
    return 0.0f;
}

float UUWEHealthSetComponent::GetMaxHealth() const {
    return 0.0f;
}

float UUWEHealthSetComponent::GetHealth() const {
    return 0.0f;
}


