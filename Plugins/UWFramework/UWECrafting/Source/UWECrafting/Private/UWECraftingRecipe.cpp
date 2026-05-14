#include "UWECraftingRecipe.h"

UUWECraftingRecipe::UUWECraftingRecipe() {
    this->TriggeredDialogue = NULL;
    this->DefaultRecipeState = ERecipeState::Unlocked;
    this->bNotifyOnUnlock = true;
    this->CraftingTime = 1.50f;
    this->OrderingIndex = 0;
    this->DuplicatesBuilderActionData = false;
}


