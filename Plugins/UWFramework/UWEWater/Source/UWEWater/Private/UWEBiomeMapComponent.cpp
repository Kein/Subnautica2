#include "UWEBiomeMapComponent.h"

UUWEBiomeMapComponent::UUWEBiomeMapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CaptureRadius = 10000.00f;
    this->RenderTarget = NULL;
}


