#include "MercunaNavGridModifierVolume.h"
#include "MercunaNavGridModifierComponent.h"

AMercunaNavGridModifierVolume::AMercunaNavGridModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaNavGridModifierComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaNavGridModifierComponent*)RootComponent;
}

void AMercunaNavGridModifierVolume::SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes) {
}

void AMercunaNavGridModifierVolume::SetSize(FVector Size) {
}

void AMercunaNavGridModifierVolume::SetShape(EMercunaModifierVolumeShape NewShape) {
}

void AMercunaNavGridModifierVolume::SetPrismVertices(const TArray<FVector2D>& NewVertices) {
}

void AMercunaNavGridModifierVolume::SetEnabled(bool Enabled) {
}

void AMercunaNavGridModifierVolume::SetCostMultiplier(float NewCostMultiplier) {
}

void AMercunaNavGridModifierVolume::RemoveFromGrid() {
}

void AMercunaNavGridModifierVolume::OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes) {
}

void AMercunaNavGridModifierVolume::OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier) {
}

FVector AMercunaNavGridModifierVolume::GetSize() const {
    return FVector{};
}

EMercunaModifierVolumeShape AMercunaNavGridModifierVolume::GetShape() const {
    return EMercunaModifierVolumeShape::Box;
}

void AMercunaNavGridModifierVolume::AddToGrid(AMercunaNavGraph2D* NavGrid) {
}

void AMercunaNavGridModifierVolume::AddToAllGrids(const FGameplayTagQuery GridTagQuery) {
}


