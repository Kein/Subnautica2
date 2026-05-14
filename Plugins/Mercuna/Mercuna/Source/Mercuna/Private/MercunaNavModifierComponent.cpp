#include "MercunaNavModifierComponent.h"

UMercunaNavModifierComponent::UMercunaNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
}

void UMercunaNavModifierComponent::SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes) {
}

void UMercunaNavModifierComponent::SetSize(FVector NewSize) {
}

void UMercunaNavModifierComponent::SetEnabled(bool Enabled) {
}

void UMercunaNavModifierComponent::SetCostMultiplier(float NewCostMultiplier) {
}

FVector UMercunaNavModifierComponent::GetSize() const {
    return FVector{};
}


