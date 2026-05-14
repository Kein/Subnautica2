#include "UWEVolumeTrackerStatics.h"

UUWEVolumeTrackerStatics::UUWEVolumeTrackerStatics() {
}

void UUWEVolumeTrackerStatics::QueryVolumes(const UObject* WorldContextObject, FVolumeQueryResult& Result, const AActor* IgnoreActor, const FVector& Location, float Radius) {
}

bool UUWEVolumeTrackerStatics::IsLocationUnderwater(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return false;
}

bool UUWEVolumeTrackerStatics::IsLocationInWaterCurrent(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return false;
}

bool UUWEVolumeTrackerStatics::IsLocationInBase(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return false;
}

bool UUWEVolumeTrackerStatics::IsInWaterCurrent(const FVolumeQueryResult& Result) {
    return false;
}

bool UUWEVolumeTrackerStatics::IsInWater(const FVolumeQueryResult& Result) {
    return false;
}

bool UUWEVolumeTrackerStatics::HasAirVolume(const FVolumeQueryResult& Result) {
    return false;
}

FVector UUWEVolumeTrackerStatics::GetWaterLine(const FVolumeQueryResult& Result) {
    return FVector{};
}

TArray<UObject*> UUWEVolumeTrackerStatics::GetVolumeQueryResultVolumesObjects(const FVolumeQueryResult& Result) {
    return TArray<UObject*>();
}

TArray<TScriptInterface<ITrackedVolume>> UUWEVolumeTrackerStatics::GetVolumeQueryResultVolumes(const FVolumeQueryResult& Result) {
    return TArray<TScriptInterface<ITrackedVolume>>();
}

TScriptInterface<ITrackedVolume> UUWEVolumeTrackerStatics::GetVolumeQueryResultOuterVolume(const FVolumeQueryResult& Result) {
    return NULL;
}

TScriptInterface<ITrackedVolume> UUWEVolumeTrackerStatics::GetVolumeQueryResultOceanVolume(const FVolumeQueryResult& Result) {
    return NULL;
}

UObject* UUWEVolumeTrackerStatics::GetVolumeQueryResultCurrentVolumeObject(const FVolumeQueryResult& Result) {
    return NULL;
}

TScriptInterface<ITrackedVolume> UUWEVolumeTrackerStatics::GetVolumeQueryResultCurrentVolume(const FVolumeQueryResult& Result) {
    return NULL;
}

FGameplayTagContainer UUWEVolumeTrackerStatics::GetVolumeQueryResultCurrentTags(const FVolumeQueryResult& Result) {
    return FGameplayTagContainer{};
}

float UUWEVolumeTrackerStatics::GetDepthInOceanAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return 0.0f;
}

float UUWEVolumeTrackerStatics::GetDepthInOcean(const FVolumeQueryResult& Result, const FVector& Location) {
    return 0.0f;
}

float UUWEVolumeTrackerStatics::GetDepthAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return 0.0f;
}

float UUWEVolumeTrackerStatics::GetDepth(const FVolumeQueryResult& Result, const FVector& Location) {
    return 0.0f;
}

FGameplayTagContainer UUWEVolumeTrackerStatics::GetCurrentTagsAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return FGameplayTagContainer{};
}


