#include "SN2MetalFarm.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2MetalFarm::ASN2MetalFarm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->InventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("InventoryInteraction"));
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->CurrentItemType = NULL;
    this->SeedClass = NULL;
    this->InventoryInteraction->SetupAttachment(RootComponent);
}

void ASN2MetalFarm::OnSeedSpawned(AActor* Actor) {
}

void ASN2MetalFarm::OnSeedRemoved(const FUWEInventoryItem& InventoryItem) {
}

void ASN2MetalFarm::OnSeedAdded(const FUWEInventoryItem& InventoryItem) {
}

void ASN2MetalFarm::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2MetalFarm, CurrentItemType);
}


