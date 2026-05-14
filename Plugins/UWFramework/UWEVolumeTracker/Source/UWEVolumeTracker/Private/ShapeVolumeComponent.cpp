#include "ShapeVolumeComponent.h"

UShapeVolumeComponent::UShapeVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UShapeVolumeComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData UShapeVolumeComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds UShapeVolumeComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


