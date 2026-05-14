#include "UWEPowerSimulationState.h"

FUWEPowerSimulationState::FUWEPowerSimulationState() {
    this->StoredPower = 0.00f;
    this->TotalPowerGeneration = 0.00f;
    this->TotalContinuousPowerDrain = 0.00f;
    this->PowerGridLimit = 0.00f;
    this->UsableStoredPower = 0.00f;
    this->DisabledStoredPower = 0.00f;
    this->MaxChargeableAmount = 0.00f;
    this->BasePowerGridLimit = 0.00f;
    this->TotalPowerCapacity = 0.00f;
    this->TotalDisabledStoredPower = 0.00f;
    this->bIsPowered = false;
}

