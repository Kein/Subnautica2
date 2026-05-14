#include "UWESplineWaterCurrentVisualizer.h"

UUWESplineWaterCurrentVisualizer::UUWESplineWaterCurrentVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = true;
    this->DrawDistance = 10000.00f;
    this->VelocityScale = 0.25f;
    this->SplineLengthStepBaseVelocityDistance = 150.00f;
    this->SplineRadiusStep = 150.00f;
    this->SplineCircleStep = 150.00f;
}


