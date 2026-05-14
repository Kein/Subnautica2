#include "UWEOverlapWorldForce.h"

AUWEOverlapWorldForce::AUWEOverlapWorldForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsActive = true;
    this->EnableMassRemapping = false;
}

void AUWEOverlapWorldForce::SetActive(bool InIsActive) {
}





