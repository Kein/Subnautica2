#include "UWEFarmTrayBase.h"
#include "Components/StaticMeshComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEFarmTrayBase::AUWEFarmTrayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
    this->InventoryInteractionComponent = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("InventoryInteraction"));
    this->AbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->InventoryInteractionComponent->SetupAttachment(RootComponent);
}

void AUWEFarmTrayBase::OnSeedRemoved(const FUWEInventoryItem& InventoryItem) {
}

void AUWEFarmTrayBase::OnSeedAdded(const FUWEInventoryItem& InventoryItem) {
}

void AUWEFarmTrayBase::OnRep_GrowingPlants(const TArray<FUWEPlantItemActor>& OldGrowingPlants) {
}

void AUWEFarmTrayBase::OnPlantsLoaded(TArray<AActor*> Plants) {
}

void AUWEFarmTrayBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEFarmTrayBase, GrowingPlants);
}


