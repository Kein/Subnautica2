#include "SN2RythmHarvestViewModel.h"

USN2RythmHarvestViewModel::USN2RythmHarvestViewModel() {
    this->TimeLastImperfectHit = 0.00f;
    this->TimeLastPerfectHit = 0.00f;
    this->HarvestTime = 0.00f;
    this->DifficultyLevel = EUWEHarvestDifficultyLevel::Easy;
    this->HasValidTarget = true;
    this->IsIdle = false;
    this->WorldContextObject = NULL;
    this->RythmGameWidget = NULL;
}

USN2RythmHarvestViewModel* USN2RythmHarvestViewModel::TryGetRythmHarvestViewModel(UObject* WorldContext) {
    return NULL;
}

void USN2RythmHarvestViewModel::ShowRythmGame() {
}

void USN2RythmHarvestViewModel::SetIsIdle(bool InIsIdle) {
}

void USN2RythmHarvestViewModel::HideRythmGame() {
}


