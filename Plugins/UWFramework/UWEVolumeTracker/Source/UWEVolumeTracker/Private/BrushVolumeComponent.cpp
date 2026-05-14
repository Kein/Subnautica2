#include "BrushVolumeComponent.h"

UBrushVolumeComponent::UBrushVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBrushVolumeComponent::IsSphereFullyInside(const FUWESphereTransformed& Sphere) {
    return false;
}

FTrackedVolumeData UBrushVolumeComponent::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}

FBoxSphereBounds UBrushVolumeComponent::GetBounds() const {
    return FBoxSphereBounds{};
}


