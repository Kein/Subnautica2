#include "UWEEdgeOfWorldStatics.h"

UUWEEdgeOfWorldStatics::UUWEEdgeOfWorldStatics() {
}

bool UUWEEdgeOfWorldStatics::IsPointWithinEdgeOfWorld(const UObject* WorldContextObject, FVector Point) {
    return false;
}

bool UUWEEdgeOfWorldStatics::IsPointOutOfBounds(const UObject* WorldContextObject, FVector Point) {
    return false;
}

bool UUWEEdgeOfWorldStatics::IsActorWithinEdgeOfWorld(const UObject* WorldContextObject, AActor* ActorToCheck) {
    return false;
}

bool UUWEEdgeOfWorldStatics::IsActorOutOfBounds(const UObject* WorldContextObject, AActor* ActorToCheck) {
    return false;
}


