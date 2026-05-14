#include "UWESphereWorldZone.h"
#include "Components/SphereComponent.h"

AUWESphereWorldZone::AUWESphereWorldZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->SphereComponent = (USphereComponent*)RootComponent;
}


