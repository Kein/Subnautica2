#include "MercunaNavGridModifierComponent.h"

UMercunaNavGridModifierComponent::UMercunaNavGridModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bApplyToAllNavGrids = false;
    this->Shape = EMercunaModifierVolumeShape::Box;
    this->PrismVertices.AddDefaulted(5);
}

void UMercunaNavGridModifierComponent::SetShape(EMercunaModifierVolumeShape NewShape) {
}

void UMercunaNavGridModifierComponent::SetPrismVertices(const TArray<FVector2D>& NewVertices) {
}

void UMercunaNavGridModifierComponent::RemoveFromGrid() {
}

void UMercunaNavGridModifierComponent::OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes) {
}

void UMercunaNavGridModifierComponent::OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier) {
}

EMercunaModifierVolumeShape UMercunaNavGridModifierComponent::GetShape() const {
    return EMercunaModifierVolumeShape::Box;
}

void UMercunaNavGridModifierComponent::AddToGrid(AMercunaNavGraph2D* NewNavGrid) {
}

void UMercunaNavGridModifierComponent::AddToAllGrids(const FGameplayTagQuery NewGridTagQuery) {
}


