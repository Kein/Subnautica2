#include "SN2PlayerTemperatureViewModel.h"

USN2PlayerTemperatureViewModel::USN2PlayerTemperatureViewModel() {
    this->IsLowHeatWarningTriggered = false;
    this->IsMidHeatWarningTriggered = false;
    this->IsHighHeatWarningTriggered = false;
    this->IsInHeatDanger = false;
    this->LowHeatThreshold = 0.00f;
    this->MediumHeatThreshold = 0.00f;
    this->HighHeatThreshold = 0.00f;
    this->LowColdThreshold = 0.00f;
    this->MediumColdThreshold = 0.00f;
    this->HighColdThreshold = 0.00f;
}


