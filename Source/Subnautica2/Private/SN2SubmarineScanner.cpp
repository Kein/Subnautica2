#include "SN2SubmarineScanner.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ASN2SubmarineScanner::ASN2SubmarineScanner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


