#include "UWEBaseRefundActor.h"
#include "UWEInventoryComponent.h"
#include "UWESaveComponent.h"

AUWEBaseRefundActor::AUWEBaseRefundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
}

void AUWEBaseRefundActor::OnItemRemoved(const FUWEInventoryItem& InventoryItem) {
}


