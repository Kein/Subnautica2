#include "UWEWaterBodyOcean.h"
#include "Components/ChildActorComponent.h"

AUWEWaterBodyOcean::AUWEWaterBodyOcean(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterVolumeComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("WaterVolumeComponent"));
    this->WaterLinePPMThreshold = 300.00f;
    this->bDirty = true;
    //FIXME
    //this->WaterVolumeComponent->SetupAttachment(SplineComp);
}

void AUWEWaterBodyOcean::PropagateToChildActors_Implementation() {
}

void AUWEWaterBodyOcean::OnUnderwaterBlurChanged_Implementation(bool bEnabled) {
}



