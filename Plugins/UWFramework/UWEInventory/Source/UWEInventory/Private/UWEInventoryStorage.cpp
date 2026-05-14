#include "UWEInventoryStorage.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEInventoryStorage::AUWEInventoryStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
}

void AUWEInventoryStorage::Save() {
}

void AUWEInventoryStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEInventoryStorage, StorageContainers);
    DOREPLIFETIME(AUWEInventoryStorage, ItemsContainer);
}


