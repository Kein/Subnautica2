#include "SN2FabricatorViewModel.h"

USN2FabricatorViewModel::USN2FabricatorViewModel() {
    this->IsCraftingInProgress = false;
    this->IsLocalCraftingInProgress = false;
    this->RecipeAtTopOfQueue = NULL;
    this->QueueSize = 0;
    this->CrafterComponent = NULL;
    this->CraftingComponent = NULL;
    this->ActiveCategory = NULL;
}

bool USN2FabricatorViewModel::TryAddToCraftingQueue(USN2RecipeViewModel* ViewModel) {
    return false;
}

bool USN2FabricatorViewModel::RecipeIsUsable(UUWECraftingRecipe* Recipe, FGameplayTag& ReasonOut) const {
    return false;
}

void USN2FabricatorViewModel::OnPlayerInRangeChanged(bool PlayerInRange) {
}

void USN2FabricatorViewModel::OnIsPoweredChanged(bool bIsPowered) {
}

void USN2FabricatorViewModel::OnInventoryChanged() {
}

void USN2FabricatorViewModel::OnCraftInProgressChanged(bool bCraftingInProgress) {
}

void USN2FabricatorViewModel::OnCrafterQueueUpdated(const TSoftObjectPtr<UUWECraftingRecipe>& QueuedRecipe, int32 InQueueSize) {
}

void USN2FabricatorViewModel::OnAnimationStateChanged(ECrafterAnimationState PreviousState, ECrafterAnimationState NewState) {
}

bool USN2FabricatorViewModel::IsPowered() const {
    return false;
}

bool USN2FabricatorViewModel::HasOverflowItems() const {
    return false;
}

USN2RecipesListViewModel* USN2FabricatorViewModel::GetRecipeList(UUWECraftingRecipeCategory* Category, UObject* WorldContext) {
    return NULL;
}

void USN2FabricatorViewModel::ForwardCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void USN2FabricatorViewModel::ForwardCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void USN2FabricatorViewModel::ForceCloseWidget() {
}

void USN2FabricatorViewModel::Disconnect() {
}

void USN2FabricatorViewModel::CraftFromRecipe(USN2RecipeViewModel* RecipeVM) {
}

void USN2FabricatorViewModel::ClearCrafterQueue() {
}

bool USN2FabricatorViewModel::CanQueue() const {
    return false;
}


