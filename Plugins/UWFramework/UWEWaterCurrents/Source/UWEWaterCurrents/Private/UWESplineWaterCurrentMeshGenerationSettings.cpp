#include "UWESplineWaterCurrentMeshGenerationSettings.h"

FUWESplineWaterCurrentMeshGenerationSettings::FUWESplineWaterCurrentMeshGenerationSettings() {
    this->Material = NULL;
    this->SplineRadiusMultiplier = 0.00f;
    this->SplineLengthStep = 0.00f;
    this->SplineCircleStep = 0.00f;
    this->SimplifyToPlanar = false;
    this->GenerateSimpleCollision = false;
    this->VertexColoringRadiusDistanceProportion = 0.00f;
}

