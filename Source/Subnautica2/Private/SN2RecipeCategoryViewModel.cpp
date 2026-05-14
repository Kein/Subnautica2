#include "SN2RecipeCategoryViewModel.h"

USN2RecipeCategoryViewModel::USN2RecipeCategoryViewModel() {
    this->WorldContextObject = NULL;
    this->Category = NULL;
    this->AreAllRecipesLocked = false;
    this->HasPreviouslyUnseenRecipe = false;
    this->NumPreviouslyUnseenRecipes = 0;
    this->IsExpanded = true;
}

void USN2RecipeCategoryViewModel::ReducePreviouslyUnseenRecipes() {
}

TSoftObjectPtr<UTexture2D> USN2RecipeCategoryViewModel::GetThumbnail() const {
    return NULL;
}

FText USN2RecipeCategoryViewModel::GetCrafterText() const {
    return FText::GetEmpty();
}

FText USN2RecipeCategoryViewModel::GetCategoryName() const {
    return FText::GetEmpty();
}

FText USN2RecipeCategoryViewModel::GetCategoryDescription() const {
    return FText::GetEmpty();
}

UUWECraftingRecipeCategory* USN2RecipeCategoryViewModel::GetCategoryDataAsset() const {
    return NULL;
}

void USN2RecipeCategoryViewModel::Disconnect() {
}


