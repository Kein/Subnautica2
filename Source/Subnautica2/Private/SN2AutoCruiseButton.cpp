#include "SN2AutoCruiseButton.h"
#include "Components/StaticMeshComponent.h"

ASN2AutoCruiseButton::ASN2AutoCruiseButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
    this->ButtonMesh = (UStaticMeshComponent*)RootComponent;
}


