#include "SN2RecipeRequirementViewModel.h"

USN2RecipeRequirementViewModel::USN2RecipeRequirementViewModel() {
    this->ItemType = NULL;
    this->BioScanData = NULL;
    this->NumRequired = 0;
    this->NumAvailable = 0;
    this->bShowNumAvailableCount = false;
}

void USN2RecipeRequirementViewModel::OnAssetUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

bool USN2RecipeRequirementViewModel::CheckItemNameSubstringExceedsCharacterLimit(int32 CharacterLimit) {
    return false;
}


