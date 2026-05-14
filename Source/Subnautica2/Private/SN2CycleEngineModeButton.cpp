#include "SN2CycleEngineModeButton.h"
#include "Components/StaticMeshComponent.h"

ASN2CycleEngineModeButton::ASN2CycleEngineModeButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
    this->ButtonMesh = (UStaticMeshComponent*)RootComponent;
}


