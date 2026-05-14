#include "SN2RecipeViewModel.h"

USN2RecipeViewModel::USN2RecipeViewModel() {
    this->TotalOutputCount = 0;
    this->TotalInputCount = 0;
    this->bIsBiomodRecipe = false;
    this->WorldContextObject = NULL;
    this->Recipe = NULL;
    this->BuilderAction = NULL;
    this->RelevantAsset = NULL;
    this->CraftingComponent = NULL;
    this->IsPinned = false;
    this->IsLocked = false;
    this->CraftTime = 0.00f;
    this->IsFirstTimeUnlocked = false;
    this->CurrentProgressCount = 0;
    this->TotalProgressCount = 0;
}

void USN2RecipeViewModel::UpdateInventory() {
}

void USN2RecipeViewModel::UnsubscribeFromInventoryNotifications() {
}

void USN2RecipeViewModel::TrySetRecipePinned(bool bNewValue) {
}

void USN2RecipeViewModel::TriggerBuilderAction() {
}

void USN2RecipeViewModel::SubscribeToInventoryNotifications() {
}

bool USN2RecipeViewModel::ShouldIgnoreCost() const {
    return false;
}

void USN2RecipeViewModel::OnSubsystemInventoryUpdated(const int32& InventoryId) {
}

void USN2RecipeViewModel::OnScanProgressMade(UUWEScanData* ScanData, int32 TotalScanCount) {
}

void USN2RecipeViewModel::OnRecipeUnpinned(UUWEPrimaryDataAssetBase* UnpinnedRecipe) {
}

void USN2RecipeViewModel::OnRecipePinned(UUWEPrimaryDataAssetBase* PinnedRecipe) {
}

void USN2RecipeViewModel::OnInventoryChanged() {
}

void USN2RecipeViewModel::OnBioScanRequirementsChanged() {
}

void USN2RecipeViewModel::OnAnyInventoryChanged() {
}

void USN2RecipeViewModel::MarkAsSeen() {
}

bool USN2RecipeViewModel::IsRecipeEnabled() const {
    return false;
}

bool USN2RecipeViewModel::HasEnoughSpaceForOutput() const {
    return false;
}

TSoftObjectPtr<UTexture2D> USN2RecipeViewModel::GetThumbnail() const {
    return NULL;
}

FText USN2RecipeViewModel::GetSecondaryDescription() const {
    return FText::GetEmpty();
}

TArray<USN2RecipeRequirementViewModel*> USN2RecipeViewModel::GetRequirements() const {
    return TArray<USN2RecipeRequirementViewModel*>();
}

bool USN2RecipeViewModel::GetRecipeNameSubstringExceedsCharacterLimit() const {
    return false;
}

FString USN2RecipeViewModel::GetRecipeNameAsString() const {
    return TEXT("");
}

FText USN2RecipeViewModel::GetRecipeName() const {
    return FText::GetEmpty();
}

UUWECraftingRecipe* USN2RecipeViewModel::GetRecipe() const {
    return NULL;
}

bool USN2RecipeViewModel::GetPublished() const {
    return false;
}

FText USN2RecipeViewModel::GetPowerGeneration() const {
    return FText::GetEmpty();
}

FText USN2RecipeViewModel::GetPowerDrain() const {
    return FText::GetEmpty();
}

int32 USN2RecipeViewModel::GetOrderingIndex() const {
    return 0;
}

TArray<FText> USN2RecipeViewModel::GetLocalPlayerActiveWarnings() const {
    return TArray<FText>();
}

bool USN2RecipeViewModel::GetIsPinned() const {
    return false;
}

FText USN2RecipeViewModel::GetDescription() const {
    return FText::GetEmpty();
}

TArray<FConsumableInfo> USN2RecipeViewModel::GetConsumableInfo() {
    return TArray<FConsumableInfo>();
}

void USN2RecipeViewModel::Disconnect() {
}

bool USN2RecipeViewModel::CheckItemNameSubstringExceedsCharacterLimit(int32 SubstringCharacterLimit) {
    return false;
}

bool USN2RecipeViewModel::CanAffordRecipe() const {
    return false;
}


