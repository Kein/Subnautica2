#include "SN2PlayerDeathbox.h"
#include "UWEInventoryComponent.h"

ASN2PlayerDeathbox::ASN2PlayerDeathbox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
}

bool ASN2PlayerDeathbox::AddItem(const FUWEInventoryItem& Item) {
    return false;
}


