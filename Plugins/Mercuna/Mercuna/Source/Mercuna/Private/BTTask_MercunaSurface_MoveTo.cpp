#include "BTTask_MercunaSurface_MoveTo.h"

UBTTask_MercunaSurface_MoveTo::UBTTask_MercunaSurface_MoveTo() {
    this->NodeName = TEXT("Mercuna Surface: Move To");
    this->Speed = 1.00f;
    this->EndDistance = 0.00f;
    this->bObserveBlackboardValue = true;
    this->bAllowPartialPath = true;
    this->bAvoidTargetActor = false;
    this->bUseEndActorOrientation = false;
}


