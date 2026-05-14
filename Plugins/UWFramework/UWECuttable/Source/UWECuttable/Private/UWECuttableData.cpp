#include "UWECuttableData.h"

UUWECuttableData::UUWECuttableData() {
    this->CanBeDestroyed = true;
    this->NumHitsToBreak = 10;
}

UUWECuttableData* UUWECuttableData::GetCuttableDataForComponent(UActorComponent* ActorComponent) {
    return NULL;
}

UUWECuttableData* UUWECuttableData::GetCuttableDataForActor(AActor* Actor) {
    return NULL;
}


