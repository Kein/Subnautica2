#include "SN2RecipesListViewModel.h"

USN2RecipesListViewModel::USN2RecipesListViewModel() {
    this->WorldContextObject = NULL;
    this->FilterCategory = NULL;
    this->BlueprintsCategory = NULL;
    this->StoryGoalContainer = NULL;
}

void USN2RecipesListViewModel::SetBlueprintsCategory(UUWECraftingRecipeCategory* InBlueprintCategory) {
}

void USN2RecipesListViewModel::Refresh() {
}

void USN2RecipesListViewModel::OnUnlockableUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void USN2RecipesListViewModel::InitializeWithOverrideInventories(UObject* WorldContext, const TArray<int32>& NewOverrideCraftingComponentInventories) {
}

void USN2RecipesListViewModel::InitializeFiltered(UUWECraftingRecipeCategory* Category, UObject* WorldContext, bool OnlyShowBuilderActions) {
}

void USN2RecipesListViewModel::Initialize(UObject* WorldContext) {
}

bool USN2RecipesListViewModel::HasAnyUnlockedInCategory(const UUWECraftingRecipeCategory* Category) const {
    return false;
}

void USN2RecipesListViewModel::AnyScanProgressMade(UUWEScanData* ScanData, int32 TotalScanCount) {
}


