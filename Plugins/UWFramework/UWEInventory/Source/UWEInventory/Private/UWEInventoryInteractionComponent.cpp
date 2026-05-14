#include "UWEInventoryInteractionComponent.h"
#include "Net/UnrealNetwork.h"

UUWEInventoryInteractionComponent::UUWEInventoryInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryOwner = NULL;
    this->InventoryInteractionEnabled = true;
    this->SaveHandle = NULL;
}

void UUWEInventoryInteractionComponent::SetInventoryInteractionEnabled(bool InteractionEnabled) {
}

void UUWEInventoryInteractionComponent::OnRep_InventoryInteractionEnabled() {
}

void UUWEInventoryInteractionComponent::InteractWithInventoryInteractionComponent(AController* Controller, APawn* Pawn, const FHitResult& HitResult) {
}

void UUWEInventoryInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEInventoryInteractionComponent, InventoryInteractionEnabled);
}


