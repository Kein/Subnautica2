#include "UWEInteractSubsystem.h"

UUWEInteractSubsystem::UUWEInteractSubsystem() {
}

AActor* UUWEInteractSubsystem::GetSelectedTargetActor() const {
    return NULL;
}

FUWETargetActor UUWEInteractSubsystem::GetHoverTarget() const {
    return FUWETargetActor{};
}


