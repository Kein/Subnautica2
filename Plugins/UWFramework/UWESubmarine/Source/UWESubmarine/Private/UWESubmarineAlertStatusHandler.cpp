#include "UWESubmarineAlertStatusHandler.h"

UUWESubmarineAlertStatusHandler::UUWESubmarineAlertStatusHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubmarineMovement = NULL;
}

void UUWESubmarineAlertStatusHandler::OnCollisionImminent(bool bNewCollisionImminent) {
}


