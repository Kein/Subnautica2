#include "SN2BasePowerViewModel.h"

USN2BasePowerViewModel::USN2BasePowerViewModel() {
    this->IsInBase = false;
    this->ShowPowerHUD = false;
    this->CurrentPower = 0.00f;
    this->PowerStorage = 0.00f;
    this->PowerGeneration = 0.00f;
    this->PowerConsumption = 0.00f;
    this->HasPower = false;
    this->HasGeneration = false;
    this->HasStoredPower = false;
}

float USN2BasePowerViewModel::GetStoredPowerConsumptionPercent() const {
    return 0.0f;
}

float USN2BasePowerViewModel::GetPowerNormalized() const {
    return 0.0f;
}

float USN2BasePowerViewModel::GetPowerGenerationPercent() const {
    return 0.0f;
}

float USN2BasePowerViewModel::GetGeneratedPowerConsumptionPercent() const {
    return 0.0f;
}


