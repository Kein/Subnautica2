#include "UWESphereWorldPOI.h"
#include "Components/SphereComponent.h"

AUWESphereWorldPOI::AUWESphereWorldPOI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->SphereComponent = (USphereComponent*)RootComponent;
}


