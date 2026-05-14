#include "SN2SubmarineFrontLightButton.h"
#include "Components/StaticMeshComponent.h"

ASN2SubmarineFrontLightButton::ASN2SubmarineFrontLightButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
    this->ButtonMesh = (UStaticMeshComponent*)RootComponent;
}


