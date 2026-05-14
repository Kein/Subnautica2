#include "InstancedMeshVolumeComponent.h"

UInstancedMeshVolumeComponent::UInstancedMeshVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UInstancedMeshVolumeComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData UInstancedMeshVolumeComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds UInstancedMeshVolumeComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


