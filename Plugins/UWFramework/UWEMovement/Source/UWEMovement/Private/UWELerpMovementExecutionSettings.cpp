#include "UWELerpMovementExecutionSettings.h"

FUWELerpMovementExecutionSettings::FUWELerpMovementExecutionSettings() {
    this->duration = 0.00f;
    this->Loops = false;
    this->SetWorldTransform = false;
    this->EaseType = EUWELerpMovementEaseType::None;
    this->EaseExp = 0.00f;
}

