#include "UWEBreakableData.h"

UUWEBreakableData::UUWEBreakableData() {
    this->NumHitsToBreak = 3;
    this->NumHitsToBreakWithTool = 1;
}

UUWEBreakableData* UUWEBreakableData::GetBreakableDataForComponent(UActorComponent* ActorComponent) {
    return NULL;
}

UUWEBreakableData* UUWEBreakableData::GetBreakableDataForActor(const AActor* Actor) {
    return NULL;
}


