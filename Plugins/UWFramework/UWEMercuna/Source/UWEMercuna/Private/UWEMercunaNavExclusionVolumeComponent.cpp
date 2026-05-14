#include "UWEMercunaNavExclusionVolumeComponent.h"

UUWEMercunaNavExclusionVolumeComponent::UUWEMercunaNavExclusionVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RebuildAutomatically = true;
    this->BoundCalculationIncludeNonColliding = false;
    this->BoundCalculationIncludeFromChildActors = true;
    this->ExclusionVolumeActor = NULL;
}

void UUWEMercunaNavExclusionVolumeComponent::RebuildNavigationData() {
}

bool UUWEMercunaNavExclusionVolumeComponent::IsVolumeCreated() const {
    return false;
}

AMercunaNavExclusionVolume* UUWEMercunaNavExclusionVolumeComponent::GetExclusionVolumeActor() const {
    return NULL;
}

void UUWEMercunaNavExclusionVolumeComponent::DestroyVolume() {
}

void UUWEMercunaNavExclusionVolumeComponent::CreateVolume() {
}


