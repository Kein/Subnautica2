#include "SN2Locker.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWEUGCComponent.h"

ASN2Locker::ASN2Locker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UGCComponent = CreateDefaultSubobject<UUWEUGCComponent>(TEXT("UGCEditComponent"));
    this->InventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("InventoryInteraction"));
    this->InventoryInteraction->SetupAttachment(RootComponent);
}

UUWEItemType* ASN2Locker::GetPrimaryItemType() const {
    return NULL;
}

float ASN2Locker::GetPercentageFull() const {
    return 0.0f;
}


