#include "UWECrafterComponent.h"
#include "Net/UnrealNetwork.h"

UUWECrafterComponent::UUWECrafterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanQueueRecipes = true;
    this->bPlayerInRange = false;
    this->DefaultCraftingTime = 0.00f;
    this->MaxQueueSize = 10;
    this->bCraftShouldGoIntoInventory = true;
    this->bCraftingInProgress = false;
    this->bOwnerInventoryFull = false;
    this->SaveHandle = NULL;
    this->AnimationState = ECrafterAnimationState::ReadyToStartCraft;
    this->PlayerInRangeMaxRange = 300.00f;
    this->ListenPlayerInRange = NULL;
}

bool UUWECrafterComponent::TryAddRecipeToLocalQueue(UUWECraftingComponent* CraftingComponent, UUWECraftingRecipe* Recipe, const TScriptInterface<IUWEItemPickup>& OutputInventory, bool bForceImmediate) {
    return false;
}

void UUWECrafterComponent::StartCrafting(UUWECraftingRecipe* Recipe, TScriptInterface<IUWEItemPickup> OutputInventory, UUWECraftingComponent* CraftingComponent, bool bForceImmediate) {
}

void UUWECrafterComponent::SetAnimationState(ECrafterAnimationState NewState) {
}

void UUWECrafterComponent::OnStoryGoalUnlocked(UUWEStoryGoal* StoryGoal, AActor* Target) {
}

void UUWECrafterComponent::OnRep_PlayerInRange() {
}

void UUWECrafterComponent::OnRep_OwnerInventoryFull() {
}

void UUWECrafterComponent::OnRep_CraftingInProgress() {
}

void UUWECrafterComponent::OnRep_AnimationState(ECrafterAnimationState PreviousAnimationState) {
}

void UUWECrafterComponent::OnRep_ActiveCrafts() {
}

void UUWECrafterComponent::OnPoweredStateChanged(bool bNewIsPowered) {
}

void UUWECrafterComponent::OnPlayerOutOfRange() {
}

void UUWECrafterComponent::OnPlayerInRange() {
}

void UUWECrafterComponent::OnAnyRegisteredInventoryChanged() {
}

void UUWECrafterComponent::NotifyCraftingStarted_Implementation(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void UUWECrafterComponent::NotifyCraftingCompleted_Implementation(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

bool UUWECrafterComponent::IsCrafterBusy() const {
    return false;
}

void UUWECrafterComponent::HandleCraftingResult(bool Successful, const TArray<FCraftingRecipeOutput>& RecipeOutput, TScriptInterface<IUWEItemPickup> OutputInventory) {
}

ECrafterAnimationState UUWECrafterComponent::GetCrafterAnimationState() const {
    return ECrafterAnimationState::ReadyToStartCraft;
}

bool UUWECrafterComponent::CanUseRecipe(UUWECraftingRecipe* Recipe) {
    return false;
}

bool UUWECrafterComponent::CanEverUseRecipe(UUWECraftingRecipe* Recipe) {
    return false;
}

bool UUWECrafterComponent::CanCraftItemFromRecipe(UUWECraftingComponent* CraftingComponent, UUWECraftingRecipe* Recipe, int32 Quantity) {
    return false;
}

void UUWECrafterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWECrafterComponent, bPlayerInRange);
    DOREPLIFETIME(UUWECrafterComponent, bCraftingInProgress);
    DOREPLIFETIME(UUWECrafterComponent, bOwnerInventoryFull);
    DOREPLIFETIME(UUWECrafterComponent, ActiveCrafts);
    DOREPLIFETIME(UUWECrafterComponent, AnimationState);
}


