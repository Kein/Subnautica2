#include "UWEPowerTerminalSimulation.h"

UUWEPowerTerminalSimulation::UUWEPowerTerminalSimulation() {
    this->InventoryId = 0;
    this->bChargingEnabled = true;
    this->ChargeRate = 0.00f;
    this->DrainPerChargingBattery = 0.00f;
    this->NumBatteries = 0;
}


