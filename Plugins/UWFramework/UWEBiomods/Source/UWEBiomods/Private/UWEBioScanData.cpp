#include "UWEBioScanData.h"

UUWEBioScanData::UUWEBioScanData() {
    this->DefaultUnlockState = EUnlockState::Locked;
}

EUnlockState UUWEBioScanData::GetUnlockState(APlayerState* PlayerState) {
    return EUnlockState::Locked;
}


