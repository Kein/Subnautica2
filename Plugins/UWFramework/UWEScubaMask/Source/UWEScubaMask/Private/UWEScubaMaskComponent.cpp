#include "UWEScubaMaskComponent.h"
#include "Components/StaticMeshComponent.h"

UUWEScubaMaskComponent::UUWEScubaMaskComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TopLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScubaMaskTopLeft"));
    this->TopRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScubaMaskTopRight"));
    this->Nose = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScubaMaskNose"));
    this->BottomRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScubaMaskBottomRight"));
    this->BottomLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScubaMaskBottomLeft"));
    this->DistanceFromCenter = 11.35f;
    this->AspectRatioThresholdForCorners = 2.33f;
    this->FOVExponent = 1.82f;
}


