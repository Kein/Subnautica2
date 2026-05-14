#include "SN2CraftingCategoryContainer.h"

USN2CraftingCategoryContainer::USN2CraftingCategoryContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemRoot = NULL;
    this->ColumnRoot = NULL;
    this->RecipeColumnWidgetClass = NULL;
    this->CategoryItemWidgetClass = NULL;
    this->InstantiatedChildRecipeColumn = NULL;
}

void USN2CraftingCategoryContainer::UpdateRecipes() {
}

void USN2CraftingCategoryContainer::OnInventoryUpdated(const int32& InventoryId) {
}

void USN2CraftingCategoryContainer::HandleRecipeClicked(UUWECraftingRecipe* Recipe, bool IsLeaf, TArray<TSoftObjectPtr<UUWECraftingRecipeCategory>> LeafCategory) {
}

void USN2CraftingCategoryContainer::HandleChildContainerClicked(UUWECraftingRecipe* Recipe) {
}


