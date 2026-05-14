#include "UWEBaseRemovableData.h"

UUWEBaseRemovableData::UUWEBaseRemovableData() {
    this->RemovalMode = EUWEBuilderRemovalMode::None;
}

UUWEBaseRemovableData* UUWEBaseRemovableData::GetForComponent(UActorComponent* ActorComponent) {
    return NULL;
}

UUWEBaseRemovableData* UUWEBaseRemovableData::GetForActor(const AActor* Actor) {
    return NULL;
}


