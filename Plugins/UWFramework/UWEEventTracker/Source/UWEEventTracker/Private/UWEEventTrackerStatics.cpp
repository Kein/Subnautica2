#include "UWEEventTrackerStatics.h"

UUWEEventTrackerStatics::UUWEEventTrackerStatics() {
}

void UUWEEventTrackerStatics::RegisterListenerForWorldEventAsset(UObject* WorldContextObject, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& Event) {
}

void UUWEEventTrackerStatics::RegisterListenerForWorldEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& Event) {
}

void UUWEEventTrackerStatics::RegisterListenerForPlayerEventAsset(AActor* Actor, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& Event) {
}

void UUWEEventTrackerStatics::RegisterListenerForPlayerEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& Event) {
}

void UUWEEventTrackerStatics::NotifyWorldEventAssetId(UObject* WorldContextObject, FGameplayTag Verb, const FPrimaryAssetId& AssetId, double Value) {
}

void UUWEEventTrackerStatics::NotifyWorldEventAsset(UObject* WorldContextObject, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, double Value) {
}

void UUWEEventTrackerStatics::NotifyWorldEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, double Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerEventAssetId(AActor* Actor, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerEventAsset(AActor* Actor, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerAndWorldEventAssetId(AActor* Actor, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerAndWorldEventAsset(AActor* Actor, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyPlayerAndWorldEvent(AActor* Actor, FGameplayTag Verb, FGameplayTag Tag, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyLocalPlayerEventAssetId(UObject* WorldContextObject, FGameplayTag Verb, const FPrimaryAssetId& AssetId, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyLocalPlayerEventAsset(UObject* WorldContextObject, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, int32 Value) {
}

void UUWEEventTrackerStatics::NotifyLocalPlayerEvent(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag, int32 Value) {
}

UUWEEventTrackerComponent* UUWEEventTrackerStatics::GetWorldEventTracker(UObject* WorldContextObject) {
    return NULL;
}

int32 UUWEEventTrackerStatics::GetWorldEventCountAsset(UObject* WorldContextObject, FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset) {
    return 0;
}

int32 UUWEEventTrackerStatics::GetWorldEventCount(UObject* WorldContextObject, FGameplayTag Verb, FGameplayTag Tag) {
    return 0;
}

int32 UUWEEventTrackerStatics::GetPlayerEventCountAsset(const AActor* Actor, FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset) {
    return 0;
}

int32 UUWEEventTrackerStatics::GetPlayerEventCount(const AActor* Actor, FGameplayTag Verb, FGameplayTag Tag) {
    return 0;
}

UUWEEventTrackerComponent* UUWEEventTrackerStatics::GetLocalPlayerEventTracker(UObject* WorldContextObject) {
    return NULL;
}

UUWEEventTrackerComponent* UUWEEventTrackerStatics::GetEventTrackerFromActor(const AActor* Actor) {
    return NULL;
}


