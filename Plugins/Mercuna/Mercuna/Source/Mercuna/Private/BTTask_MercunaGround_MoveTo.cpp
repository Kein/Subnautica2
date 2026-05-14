#include "BTTask_MercunaGround_MoveTo.h"

UBTTask_MercunaGround_MoveTo::UBTTask_MercunaGround_MoveTo() {
    this->NodeName = TEXT("Mercuna Ground: Move To");
    this->Speed = 1.00f;
    this->EndDistance = 0.00f;
    this->bObserveBlackboardValue = true;
    this->bAllowPartialPath = true;
    this->bAvoidTargetActor = false;
}


