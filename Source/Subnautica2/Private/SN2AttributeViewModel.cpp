#include "SN2AttributeViewModel.h"

USN2AttributeViewModel::USN2AttributeViewModel() {
    this->CurrentValue = 0.00f;
    this->LastValueDelta = 0.00f;
    this->MaxValue = 0.00f;
    this->LowWarningThresholdThreshold = 30.00f;
    this->CriticalWarningThresholdThreshold = 10.00f;
    this->WarningThresholdPercent = 0.25f;
}

bool USN2AttributeViewModel::IsWarningTriggered() const {
    return false;
}

bool USN2AttributeViewModel::IsLowValueWarningTriggered() const {
    return false;
}

bool USN2AttributeViewModel::IsDepletedValueWarningTriggered() const {
    return false;
}

bool USN2AttributeViewModel::IsCriticalValueWarningTriggered() const {
    return false;
}

float USN2AttributeViewModel::GetValuePercent() const {
    return 0.0f;
}


