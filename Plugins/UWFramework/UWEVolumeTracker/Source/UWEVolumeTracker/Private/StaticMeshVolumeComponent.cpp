#include "StaticMeshVolumeComponent.h"

UStaticMeshVolumeComponent::UStaticMeshVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME: ENGINE CHANGE: this->bUseNegativeDistanceField = true;
}

bool UStaticMeshVolumeComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData UStaticMeshVolumeComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds UStaticMeshVolumeComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


