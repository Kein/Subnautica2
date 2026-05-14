#include "UWESplineWorldForceVisualizer.h"

UUWESplineWorldForceVisualizer::UUWESplineWorldForceVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = true;
    this->DrawDistance = 10000.00f;
    this->SplineLengthStep = 150.00f;
    this->SplineRadiusStep = 150.00f;
    this->SplineCircleStep = 150.00f;
    this->ForceScale = 0.00f;
}


