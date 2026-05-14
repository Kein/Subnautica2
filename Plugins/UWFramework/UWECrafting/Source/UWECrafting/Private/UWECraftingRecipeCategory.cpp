#include "UWECraftingRecipeCategory.h"

UUWECraftingRecipeCategory::UUWECraftingRecipeCategory() {
    this->CraftedBy = ECrafterType::Undefined;
    this->OrderingIndex = 0;
    this->bShowWhenEmpty = false;
}

FText UUWECraftingRecipeCategory::GetCrafterText() const {
    return FText::GetEmpty();
}


