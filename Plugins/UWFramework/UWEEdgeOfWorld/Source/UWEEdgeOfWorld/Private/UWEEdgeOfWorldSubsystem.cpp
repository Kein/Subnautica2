#include "UWEEdgeOfWorldSubsystem.h"

UUWEEdgeOfWorldSubsystem::UUWEEdgeOfWorldSubsystem() {
}

bool UUWEEdgeOfWorldSubsystem::IsPointWithinEdgeOfWorld(FVector Point) const {
    return false;
}

bool UUWEEdgeOfWorldSubsystem::IsPointOutOfBounds(FVector Point) const {
    return false;
}

bool UUWEEdgeOfWorldSubsystem::IsEdgeOfWorldCollisionEnabled() const {
    return false;
}

AUWEEdgeOfWorldSpline* UUWEEdgeOfWorldSubsystem::GetEdgeOfWorld() const {
    return NULL;
}


