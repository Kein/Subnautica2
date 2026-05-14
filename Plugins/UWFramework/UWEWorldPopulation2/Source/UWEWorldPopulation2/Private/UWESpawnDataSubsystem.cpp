#include "UWESpawnDataSubsystem.h"

UUWESpawnDataSubsystem::UUWESpawnDataSubsystem() {
    this->SpatialData = NULL;
    this->SeededLocations = NULL;
}

FString UUWESpawnDataSubsystem::GetStringFromDebugLocationInfo(const FUWEWorldPopLocationDebugInfo& InInfo) {
    return TEXT("");
}

FUWEWorldPopLocationDebugInfo UUWESpawnDataSubsystem::GetLocationDebugInfo(const FVector& Location) {
    return FUWEWorldPopLocationDebugInfo{};
}

void UUWESpawnDataSubsystem::DebugForceLoadSpatialData() {
}


