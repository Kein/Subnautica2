#include "VolumeTrackerComponent.h"

UVolumeTrackerComponent::UVolumeTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueryMode = EUWEVolumeTrackerQueryMode::MakeOverlapQueries;
    this->UpdateVolumesMode = EUWEVolumeTrackerUpdateVolumesMode::OnTick;
    this->EmulateNativeOverlapEventsForRootComponent = false;
    this->TrackerRadius = 10.00f;
    this->IsDefaultEnabled = true;
}

void UVolumeTrackerComponent::UpdateVolumes() {
}

void UVolumeTrackerComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void UVolumeTrackerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UVolumeTrackerComponent::IsInWaterCurrent() const {
    return false;
}

bool UVolumeTrackerComponent::IsInWater() const {
    return false;
}

FVector UVolumeTrackerComponent::GetWaterLine() const {
    return FVector{};
}

float UVolumeTrackerComponent::GetDepthInOcean() const {
    return 0.0f;
}

float UVolumeTrackerComponent::GetDepth() const {
    return 0.0f;
}

EVolumeType UVolumeTrackerComponent::GetCurrentVolumeType() const {
    return EVolumeType::EVolumeType_None;
}


