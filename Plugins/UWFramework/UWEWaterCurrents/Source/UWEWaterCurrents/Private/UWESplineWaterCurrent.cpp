#include "UWESplineWaterCurrent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DynamicMeshComponent.h"
#include "UWESplineWaterCurrentTierSettings.h"
#include "UWESplineWaterCurrentVelocitySettings.h"
#include "UWESplineWaterCurrentVisualizer.h"

AUWESplineWaterCurrent::AUWESplineWaterCurrent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->DynamicMeshComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("DynamicMeshComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->EditorVisualizer = CreateDefaultSubobject<UUWESplineWaterCurrentVisualizer>(TEXT("EditorVisualizer"));
    this->LoadTierSettingsFromFile = true;
    this->TierSettingsInstanced = CreateDefaultSubobject<UUWESplineWaterCurrentTierSettings>(TEXT("TierSettingsInstanced"));
    this->TierSettingsFromFile = NULL;
    this->LoadVelocitySettingsFromFile = false;
    this->VelocitySettingsInstanced = CreateDefaultSubobject<UUWESplineWaterCurrentVelocitySettings>(TEXT("VelocitySettingsInstanced"));
    this->VelocitySettingsFromFile = NULL;
    this->DynamicMeshComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AUWESplineWaterCurrent::SetBaseRadius(float BaseRadius) {
}

UUWESplineWaterCurrentVelocitySettings* AUWESplineWaterCurrent::GetVelocitySettingsBP() {
    return NULL;
}

FVector AUWESplineWaterCurrent::GetVelocityAtSplineDurationProportion(float SplineDurationProportion) {
    return FVector{};
}

FVector AUWESplineWaterCurrent::GetVelocityAtSplineDistance(float SplineDistance) {
    return FVector{};
}

UUWESplineWaterCurrentTierSettings* AUWESplineWaterCurrent::GetTierSettingsBP() {
    return NULL;
}

int32 AUWESplineWaterCurrent::GetMeshSegmentsCountAlongLength() {
    return 0;
}

float AUWESplineWaterCurrent::GetMaxSpeed() {
    return 0.0f;
}

float AUWESplineWaterCurrent::GetBaseRadius() {
    return 0.0f;
}


