#include "SN2MapDebugger.h"

USN2MapDebugger::USN2MapDebugger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMapIndex = 0;
    this->MapsFilename = TEXT("/Game/Debug/maps.json");
}

TArray<FString> USN2MapDebugger::GetWorldPopActorNames() {
    return TArray<FString>();
}

TArray<FVector> USN2MapDebugger::GetSpawnPointsForFuzzyActorName(const FString& ActorName) {
    return TArray<FVector>();
}


