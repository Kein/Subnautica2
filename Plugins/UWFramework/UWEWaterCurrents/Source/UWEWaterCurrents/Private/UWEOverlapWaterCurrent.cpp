#include "UWEOverlapWaterCurrent.h"

AUWEOverlapWaterCurrent::AUWEOverlapWaterCurrent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultEnabled = true;
    this->ApplyLastVelocityOnExit = true;
}

void AUWEOverlapWaterCurrent::SetWaterCurrentActive(bool InIsActive) {
}




FVector AUWEOverlapWaterCurrent::GetVelocityAtLocation(const FVector& Location) {
    return FVector{};
}

float AUWEOverlapWaterCurrent::GetBaseSpeed() {
    return 0.0f;
}


