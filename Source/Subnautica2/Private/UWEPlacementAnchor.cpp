#include "UWEPlacementAnchor.h"

UUWEPlacementAnchor::UUWEPlacementAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->orientation = EAnchorOrientation::Bottom;
    this->UseForSamplePoints = false;
    this->SampleRadius = 0.00f;
}


