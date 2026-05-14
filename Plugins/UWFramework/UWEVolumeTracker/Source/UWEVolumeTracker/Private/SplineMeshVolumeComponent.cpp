#include "SplineMeshVolumeComponent.h"

USplineMeshVolumeComponent::USplineMeshVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USplineMeshVolumeComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData USplineMeshVolumeComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds USplineMeshVolumeComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


