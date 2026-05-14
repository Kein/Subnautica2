#include "SN2BuilderPreviewArrow.h"
#include "Components/StaticMeshComponent.h"

ASN2BuilderPreviewArrow::ASN2BuilderPreviewArrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
}



