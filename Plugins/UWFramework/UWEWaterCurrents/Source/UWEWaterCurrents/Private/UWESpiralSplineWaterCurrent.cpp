#include "UWESpiralSplineWaterCurrent.h"

AUWESpiralSplineWaterCurrent::AUWESpiralSplineWaterCurrent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BottomRadius = 200.00f;
    this->TopRadius = 500.00f;
    this->SpiralHeightStep = 200.00f;
    this->TangentRadiusMult = 4.00f;
}


