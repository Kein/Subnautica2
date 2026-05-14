#include "UWEResonatableData.h"

UUWEResonatableData::UUWEResonatableData() {
}

bool UUWEResonatableData::IsInResonateRange(float Frequency) const {
    return false;
}

UUWEResonatableData* UUWEResonatableData::GetResonatableDataForActor(const AActor* Actor) {
    return NULL;
}

bool UUWEResonatableData::CanResonate(AActor* InstigatorActor, float Frequency) const {
    return false;
}


