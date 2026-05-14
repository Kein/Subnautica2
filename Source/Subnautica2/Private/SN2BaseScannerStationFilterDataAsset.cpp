#include "SN2BaseScannerStationFilterDataAsset.h"

USN2BaseScannerStationFilterDataAsset::USN2BaseScannerStationFilterDataAsset() {
    this->OrderingIndex = 0;
    this->DefaultUnlockState = EUnlockState::Locked;
    this->bNotifyOnUnlock = true;
    this->UnlockTriggeredDialogue = NULL;
}


