#include "MercunaNavModifierVolume.h"
#include "MercunaVolumeComponent.h"

AMercunaNavModifierVolume::AMercunaNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaVolumeComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaVolumeComponent*)RootComponent;
    this->bEnabled = true;
    this->CostMultiplier = 1.00f;
}

void AMercunaNavModifierVolume::SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes) {
}

void AMercunaNavModifierVolume::SetSize(FVector Size) {
}

void AMercunaNavModifierVolume::SetEnabled(bool Enabled) {
}

void AMercunaNavModifierVolume::SetCostMultiplier(float NewCostMultiplier) {
}

void AMercunaNavModifierVolume::RemoveFromGraph() {
}

FVector AMercunaNavModifierVolume::GetSize() const {
    return FVector{};
}

void AMercunaNavModifierVolume::AddToGraph(AMercunaNavGraph* NewNavGraph) {
}


