#include "UWESplineWaterCurrentValueMultiplier.h"

FUWESplineWaterCurrentValueMultiplier::FUWESplineWaterCurrentValueMultiplier() {
    this->ConstantMultiplier = 0.00f;
    this->EnableValueChangeOverLength = false;
    this->EnableValueChangeOverRadius = false;
    this->EnableValueChangeOverTime = false;
    this->LoopValueChangeOverTime = false;
}

