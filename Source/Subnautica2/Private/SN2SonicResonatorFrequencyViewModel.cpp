#include "SN2SonicResonatorFrequencyViewModel.h"

USN2SonicResonatorFrequencyViewModel::USN2SonicResonatorFrequencyViewModel() {
    this->TimeLastBlast = 0.00f;
    this->Frequency = 0.00f;
    this->TimePassed = 0.00f;
    this->bHasResonateTarget = false;
    this->bInstigatorCanResonateTarget = false;
    this->bHasAnyTarget = false;
    this->FrequencyMatchDegree = 1.00f;
    this->FrequencyInRange = true;
    this->IsCharged = false;
    this->IsCharging = false;
    this->WorldContextObject = NULL;
}

USN2SonicResonatorFrequencyViewModel* USN2SonicResonatorFrequencyViewModel::TryGetSonicResonatorFrequencyViewModel(UObject* WorldContext) {
    return NULL;
}

void USN2SonicResonatorFrequencyViewModel::SetResonatorItemType(const UUWEItemType* ItemType) {
}

void USN2SonicResonatorFrequencyViewModel::SetIsCharging(bool InIsCharging) {
}

void USN2SonicResonatorFrequencyViewModel::SetIsCharged(bool InIsCharging) {
}


