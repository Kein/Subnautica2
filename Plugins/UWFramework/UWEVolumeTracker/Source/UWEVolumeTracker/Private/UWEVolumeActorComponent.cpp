#include "UWEVolumeActorComponent.h"

UUWEVolumeActorComponent::UUWEVolumeActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetComponent = NULL;
}

bool UUWEVolumeActorComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData UUWEVolumeActorComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds UUWEVolumeActorComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


