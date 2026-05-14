#include "SN2TimeOfDayViewModel.h"

USN2TimeOfDayViewModel::USN2TimeOfDayViewModel() {
    this->Hour = 0;
    this->Minute = 0;
    this->SunPivotAngle = 0.00f;
    this->SunsAngle = 0.00f;
    this->DayPhase = EDayPhase::Day;
    this->TimeOfDayComponent = NULL;
}

void USN2TimeOfDayViewModel::Update() {
}


