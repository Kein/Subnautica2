#include "UWEWorldPopSubsystem.h"

UUWEWorldPopSubsystem::UUWEWorldPopSubsystem() {
    this->SaveHandle = NULL;
}

void UUWEWorldPopSubsystem::OnSpawnedResourceDestroyed(AActor* SpawnedResource) {
}

void UUWEWorldPopSubsystem::DisableSpawnForClass(TSoftClassPtr<AActor> Class) {
}


