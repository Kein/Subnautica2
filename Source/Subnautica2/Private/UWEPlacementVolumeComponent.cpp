#include "UWEPlacementVolumeComponent.h"
#include "Components/BoxComponent.h"

UUWEPlacementVolumeComponent::UUWEPlacementVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->ObjectsChecked = -1;
    this->bUseForSamplePoints = false;
    this->bOverrideBlockedReason = false;
}


