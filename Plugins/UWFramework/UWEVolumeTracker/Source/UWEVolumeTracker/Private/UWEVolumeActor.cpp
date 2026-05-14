#include "UWEVolumeActor.h"
#include "UWEVolumeActorComponent.h"

AUWEVolumeActor::AUWEVolumeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumeActorComponent = CreateDefaultSubobject<UUWEVolumeActorComponent>(TEXT("VolumeActor"));
}

bool AUWEVolumeActor::IsPointInVolume(const FVector& Point, float Radius) const {
    return false;
}

FTrackedVolumeData AUWEVolumeActor::GetTrackedVolumeData() const {
    return FTrackedVolumeData{};
}


