#include "MercunaNavOctreeModifierVolume.h"
#include "MercunaNavOctreeModifierComponent.h"

AMercunaNavOctreeModifierVolume::AMercunaNavOctreeModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaNavOctreeModifierComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaNavOctreeModifierComponent*)RootComponent;
}

void AMercunaNavOctreeModifierVolume::SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes) {
}

void AMercunaNavOctreeModifierVolume::SetSize(FVector Size) {
}

void AMercunaNavOctreeModifierVolume::SetEnabled(bool Enabled) {
}

void AMercunaNavOctreeModifierVolume::SetCostMultiplier(float NewCostMultiplier) {
}

void AMercunaNavOctreeModifierVolume::RemoveFromOctree() {
}

FVector AMercunaNavOctreeModifierVolume::GetSize() const {
    return FVector{};
}

void AMercunaNavOctreeModifierVolume::AddToOctree(AMercunaNavOctree* NavOctree) {
}


