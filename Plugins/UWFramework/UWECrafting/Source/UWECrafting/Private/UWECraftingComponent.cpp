#include "UWECraftingComponent.h"
#include "Net/UnrealNetwork.h"

UUWECraftingComponent::UUWECraftingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentCrafterComponent = NULL;
}

void UUWECraftingComponent::ServerCraftItemFromRecipe_Implementation(const TSoftObjectPtr<UUWECraftingRecipe>& Recipe, UUWECrafterComponent* Crafter, const TScriptInterface<IUWEItemPickup>& OutputInventory, bool bForceImmediate) {
}

void UUWECraftingComponent::OnRep_RegisteredSources() {
}

void UUWECraftingComponent::OnInventoryUpdated(const int32& InventoryId) {
}

bool UUWECraftingComponent::HasAnyCommunalInventoriesRegistered() {
    return false;
}

FString UUWECraftingComponent::GetRequirementsString(const TArray<FCraftingRecipeRequirement>& Requirements, const TArray<int32>& AdditionalConsideredInventories) const {
    return TEXT("");
}

TArray<FUWEInventoryItem> UUWECraftingComponent::GetAllNearbyItemsOfItemType(const UUWEItemType* ItemType) const {
    return TArray<FUWEInventoryItem>();
}

void UUWECraftingComponent::BroadcastAnyRegisteredInventoryChanged() {
}

void UUWECraftingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWECraftingComponent, RegisteredSourceIds);
}


