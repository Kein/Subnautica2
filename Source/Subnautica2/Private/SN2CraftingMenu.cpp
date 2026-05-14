#include "SN2CraftingMenu.h"
#include "EUWEInputMode.h"

USN2CraftingMenu::USN2CraftingMenu() {
    this->InputMode = EUWEInputMode::Game;
    this->ColumnRoot = NULL;
    this->CloseButton = NULL;
    this->RecipeColumnWidgetClass = NULL;
    this->InitialTagCategoryDepth = 4;
    this->InstantiatedRecipeColumn = NULL;
}

void USN2CraftingMenu::HandleRecipeClicked(UUWECraftingRecipe* Recipe) {
}

void USN2CraftingMenu::HandleCloseButtonClick() {
}


