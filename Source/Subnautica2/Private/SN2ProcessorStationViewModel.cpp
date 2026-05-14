#include "SN2ProcessorStationViewModel.h"

USN2ProcessorStationViewModel::USN2ProcessorStationViewModel() {
    this->SelectedRecipe = NULL;
    this->InventoryViewModel = NULL;
    this->ProcessingOutputAmount = 0;
    this->ProcessingState = ESN2ProcessorState::NoRecipe;
    this->NextCraftProgress = 0.00f;
    this->RecipesListViewModel = NULL;
    this->SelectedRecipeViewModel = NULL;
    this->bAllowChangingRecipe = false;
}

void USN2ProcessorStationViewModel::TryLoadProcessorForRecipe() {
}

void USN2ProcessorStationViewModel::Teardown() {
}

void USN2ProcessorStationViewModel::Setup(USN2ProcessorStationRecipeSelection* NewRecipeSelection, USN2ProcessorStationInteractionComponent* InInteractor, UUWEInventoryComponent* ProcessorInputInventory, UUWECraftingRecipeCategory* RootCategory) {
}

void USN2ProcessorStationViewModel::SelectRecipe(USN2RecipeViewModel* Recipe) {
}

void USN2ProcessorStationViewModel::OnProcessorStateChanged(UUWECraftingRecipe* Recipe, ESN2ProcessorState State, int32 OutputCount) {
}

void USN2ProcessorStationViewModel::OnProcessorInputInventoryChanged() {
}

bool USN2ProcessorStationViewModel::IsSelectedRecipe(const USN2RecipeViewModel* RecipeVM) const {
    return false;
}

int32 USN2ProcessorStationViewModel::GetProcessorInventoryID() const {
    return 0;
}

float USN2ProcessorStationViewModel::GetCraftTimeLeft() const {
    return 0.0f;
}

float USN2ProcessorStationViewModel::GetCraftProgress() const {
    return 0.0f;
}


