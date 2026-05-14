#include "UWEWaterBiomeRegionActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BoxVolumeComponent.h"
#include "BrushVolumeComponent.h"
#include "UWEBiomePostProcessComponent.h"
#include "UWEBiomeVolumeComponent.h"

AUWEWaterBiomeRegionActor::AUWEWaterBiomeRegionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BiomeRegionType = EBiomeRegionType::BRT_Water;
    this->bHasWaterSurface = false;
    this->bMaskOceanSurface = false;
    this->WaterSurfaceMeshComponent = NULL;
    this->BiomeRegionVolumeType = EBiomeRegionVolumeType::BRVT_Shape;
    this->bUseDistanceFieldMask = false;
    this->bIsOcean = false;
    this->WaterStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterStaticMeshComponent"));
    this->WaterBrushVolumeComponent = CreateDefaultSubobject<UBrushVolumeComponent>(TEXT("WaterVolumeComponent"));
    this->WaterBoxVolumeComponent = CreateDefaultSubobject<UBoxVolumeComponent>(TEXT("WaterBoxVolumeComponent"));
    this->BiomeVolumeComponent = CreateDefaultSubobject<UUWEBiomeVolumeComponent>(TEXT("BiomeVolumeComponent"));
    this->PostProcessComponent = CreateDefaultSubobject<UUWEBiomePostProcessComponent>(TEXT("PostProcessComponent"));
    this->InternalVolumeModel = NULL;
    this->InternalVolumeMesh = NULL;
    this->InternalWaterPlaneMesh = NULL;
    this->BiomeVolumeComponent->SetupAttachment(RootComponent);
    this->PostProcessComponent->SetupAttachment(RootComponent);
    this->WaterBoxVolumeComponent->SetupAttachment(RootComponent);
    this->WaterBrushVolumeComponent->SetupAttachment(RootComponent);
    this->WaterStaticMeshComponent->SetupAttachment(RootComponent);
}

void AUWEWaterBiomeRegionActor::SetWaterFogOpacityWeight(float Value) {
}

void AUWEWaterBiomeRegionActor::SetupAirVolume_Implementation() {
}

void AUWEWaterBiomeRegionActor::SetAirLightSettings() {
}

void AUWEWaterBiomeRegionActor::RecreateMaterials_Implementation() {
}


