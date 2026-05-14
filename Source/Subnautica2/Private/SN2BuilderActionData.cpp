#include "SN2BuilderActionData.h"

USN2BuilderActionData::USN2BuilderActionData() {
    this->Category = EBuilderMenuCategory::Sculpt;
    this->OrderingIndex = 0;
    this->ShowShowRecipeCategory = false;
    this->bShowRecipeCategory = true;
    this->DefaultUnlockState = EUnlockState::Unlocked;
    this->bNotifyOnUnlock = true;
    this->TriggeredDialogue = NULL;
}

bool USN2BuilderActionData::IsActionUnlockedForPlayer(APlayerState* PS) {
    return false;
}

float USN2BuilderActionData::GetUserRotationIncrementFromParams(const FSN2PlacementParams& Params) {
    return 0.0f;
}

float USN2BuilderActionData::GetLocationSnappingSizeFromParams(const FSN2PlacementParams& Params) {
    return 0.0f;
}

FString USN2BuilderActionData::GetBuildRequirementsStringForTooltip() {
    return TEXT("");
}

void USN2BuilderActionData::GetBuildCosts(TArray<FUWESculpturalBaseCellCost>& Costs) {
}


