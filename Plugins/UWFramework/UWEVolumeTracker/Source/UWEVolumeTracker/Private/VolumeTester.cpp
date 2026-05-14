#include "VolumeTester.h"
#include "Components/SceneComponent.h"
#include "VolumeTrackerComponent.h"

AVolumeTester::AVolumeTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->VolumeTracker = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTracker"));
    this->ExpectedType = EVolumeType::EVolumeType_None;
    this->VolumeTracker->SetupAttachment(RootComponent);
}


