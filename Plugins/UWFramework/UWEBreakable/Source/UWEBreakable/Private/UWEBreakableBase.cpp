#include "UWEBreakableBase.h"

UUWEBreakableBase::UUWEBreakableBase() {
    this->ResourceNodeName = FText::FromString(TEXT("Resource Node Name"));
}

bool UUWEBreakableBase::InstigatorSatisfiesTagRequirements(AActor* InstigatorActor) const {
    return false;
}

UUWEBreakableBase* UUWEBreakableBase::GetBreakableBaseDataForActor(const AActor* Actor) {
    return NULL;
}


