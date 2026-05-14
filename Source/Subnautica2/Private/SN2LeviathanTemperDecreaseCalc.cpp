#include "SN2LeviathanTemperDecreaseCalc.h"

USN2LeviathanTemperDecreaseCalc::USN2LeviathanTemperDecreaseCalc() {
    this->RelevantAttributesToCapture.AddDefaulted(2);
    this->TemperDecreasePerSec = 0.50f;
    this->TemperDecreaseThresholdPercent = 50.00f;
}


