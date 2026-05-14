#include "SN2BoxOfHolding.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"

ASN2BoxOfHolding::ASN2BoxOfHolding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Component"));
    this->Tags.AddDefaulted(1);
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Inventory"));
}

void ASN2BoxOfHolding::HandleInventoryEmptied_Implementation() {
}


