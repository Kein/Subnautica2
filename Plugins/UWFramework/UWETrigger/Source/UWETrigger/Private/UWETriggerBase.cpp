#include "UWETriggerBase.h"

AUWETriggerBase::AUWETriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerPolicy = EUWEPlayerTriggerPolicy::Always;
}

bool AUWETriggerBase::TryExecuteActions(AActor* ForActor, FUWETriggerOverlapType OverlapType) const {
    return false;
}

void AUWETriggerBase::Trigger(FUWETriggerOverlapType OverlapType, AActor* ForActor) {
}

bool AUWETriggerBase::CanTrigger(AActor* ForActor) const {
    return false;
}


