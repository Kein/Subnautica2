#include "SN2ReloadViewModel.h"

USN2ReloadViewModel::USN2ReloadViewModel() {
    this->Thumbnail = NULL;
    this->EnergyPercent = 0.00f;
}

void USN2ReloadViewModel::UnloadBattery() {
}

void USN2ReloadViewModel::Setup(UObject* InWorldContext) {
}

void USN2ReloadViewModel::PrevBattery() {
}

int32 USN2ReloadViewModel::NumBatteries() const {
    return 0;
}

void USN2ReloadViewModel::NextBattery() {
}

void USN2ReloadViewModel::LoadBattery() {
}

bool USN2ReloadViewModel::HasPrevBattery() const {
    return false;
}

bool USN2ReloadViewModel::HasNextBattery() const {
    return false;
}


