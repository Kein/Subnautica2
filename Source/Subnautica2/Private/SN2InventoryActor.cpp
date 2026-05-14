#include "SN2InventoryActor.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWESaveComponent.h"

ASN2InventoryActor::ASN2InventoryActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->Inventory = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Inventory"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->bStartupItemsHaveBeenAdded = false;
}


