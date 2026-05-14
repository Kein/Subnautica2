#include "UWEScalabilityLinker.h"

AUWEScalabilityLinker::AUWEScalabilityLinker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = true;
}

float AUWEScalabilityLinker::GetCurrentViewDistanceScale() {
    return 0.0f;
}


