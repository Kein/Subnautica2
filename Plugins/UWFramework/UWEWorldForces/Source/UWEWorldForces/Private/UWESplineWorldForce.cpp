#include "UWESplineWorldForce.h"
#include "Components/SplineComponent.h"
#include "UWESplineWorldForceVisualizer.h"

AUWESplineWorldForce::AUWESplineWorldForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->EditorVisualizer = CreateDefaultSubobject<UUWESplineWorldForceVisualizer>(TEXT("EditorVisualizer"));
    this->Radius = 300.00f;
    this->BaseFlowForce = 1000000.00f;
    this->EnableFlowForceChangeOverRadius = false;
    this->EnableFlowForceChangeOverLength = false;
    this->EnableFlowForceChangeOverTime = false;
    this->LoopFlowForceChangeOverTime = true;
    this->BaseCentricForce = 0.00f;
    this->EnableCentricForceChangeOverRadius = false;
}

FVector AUWESplineWorldForce::GetForceAtSplineDurationProportion(float SplineDurationProportion) {
    return FVector{};
}

FVector AUWESplineWorldForce::GetForceAtSplineDistance(float SplineDistance) {
    return FVector{};
}

FVector AUWESplineWorldForce::GetForceAtLocation(const FVector& Location) {
    return FVector{};
}


