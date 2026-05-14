#include "UWEMovingWaterCurrentComponent.h"

UUWEMovingWaterCurrentComponent::UUWEMovingWaterCurrentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapColliderTag = TEXT("UWEMovingWaterCurrentComponent_OverlapCollider");
    this->ProcessOverlapsOnTick = true;
    this->VelocityMultiplier = 0.50f;
    this->ApplyLastVelocityOnExit = true;
    this->DumpObjectVelocityAgainstWaterCurrent = false;
}


