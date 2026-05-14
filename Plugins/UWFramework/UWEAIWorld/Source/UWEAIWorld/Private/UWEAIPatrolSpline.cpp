#include "UWEAIPatrolSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "UWESaveComponent.h"

AUWEAIPatrolSpline::AUWEAIPatrolSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->IsDevelopmentOnly = false;
    this->ScaleDeviationPercent = 0;
    this->ScaleDeviationType = UWEAIScaleDeviationType::Random;
    this->bGroup = false;
    this->GroupMinSize = 2;
    this->GroupMaxSize = 2;
    this->GroupScaleDeviationPercent = 0;
    this->GroupScaleDeviationType = UWEAIScaleDeviationType::Random;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SpawnPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("SpawnPoint"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->SpawnPoint->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}


