#include "SN2EnergyToolViewModel.h"

USN2EnergyToolViewModel::USN2EnergyToolViewModel() {
    this->CurrentEnergyPercent = 0.00f;
    this->HasEnergy = false;
    this->HasAmmoLoaded = false;
    this->WorldContextObject = NULL;
}

void USN2EnergyToolViewModel::OnToolChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped) {
}

void USN2EnergyToolViewModel::OnLocalClientReady() {
}

void USN2EnergyToolViewModel::OnEnergyChanged(float CurrentPercent) {
}

void USN2EnergyToolViewModel::OnAmmoReleased() {
}

void USN2EnergyToolViewModel::OnAmmoLoaded() {
}


