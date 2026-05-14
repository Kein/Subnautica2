#include "UWELeviathanSubsystem.h"

UUWELeviathanSubsystem::UUWELeviathanSubsystem() {
    this->LeviathanMoveDistance = 10000.00f;
}

AActor* UUWELeviathanSubsystem::OnTriggerAreaTouched(AUWELeviathanTrigger* Trigger, const TSoftClassPtr<AActor>& InLeviathanClass) {
    return NULL;
}


