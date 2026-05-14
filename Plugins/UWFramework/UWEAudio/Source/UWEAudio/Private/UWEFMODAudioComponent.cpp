#include "UWEFMODAudioComponent.h"
#include "FMODAudioComponent.h"


UUWEFMODAudioComponent::UUWEFMODAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayingCountWarningThreshold = 700;
}


