#include "UWEActorUIDStatics.h"

UUWEActorUIDStatics::UUWEActorUIDStatics() {
}

AActor* UUWEActorUIDStatics::TryGetActorFromUID(const UObject* WorldContextObject, const FUWEActorUID& ActorUId) {
    return NULL;
}

bool UUWEActorUIDStatics::IsActorUIDValid(const FUWEActorUID& ActorUId) {
    return false;
}

FUWEActorUID UUWEActorUIDStatics::GetActorUID(AActor* Actor) {
    return FUWEActorUID{};
}


