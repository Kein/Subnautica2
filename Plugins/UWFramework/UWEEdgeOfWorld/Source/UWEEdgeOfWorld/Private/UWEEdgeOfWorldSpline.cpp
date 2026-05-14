#include "UWEEdgeOfWorldSpline.h"
#include "Components/SceneComponent.h"
#include "UWESplineComponent.h"

AUWEEdgeOfWorldSpline::AUWEEdgeOfWorldSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SplineComponent = CreateDefaultSubobject<UUWESplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}

bool AUWEEdgeOfWorldSpline::IsPointInside(FVector LocationToCheck) {
    return false;
}


