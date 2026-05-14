#include "BoxVolumeComponent.h"

UBoxVolumeComponent::UBoxVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = NULL;
}

void UBoxVolumeComponent::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
}

FVector UBoxVolumeComponent::GetUnscaledBoxExtent() const {
    return FVector{};
}

FVector UBoxVolumeComponent::GetScaledBoxExtent() const {
    return FVector{};
}


