#include "UWEEventTrackerComponent.h"
#include "Net/UnrealNetwork.h"

UUWEEventTrackerComponent::UUWEEventTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void UUWEEventTrackerComponent::UnregisterListenerVerb(FGameplayTag Verb, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::UnregisterListenerAsset(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::UnregisterListener(FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::StoreToSaveHandle() {
}

void UUWEEventTrackerComponent::ServerNotifyAssetId_Implementation(FGameplayTag Verb, FPrimaryAssetId AssetId, int32 Value) {
}

void UUWEEventTrackerComponent::ServerNotifyAsset_Implementation(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, int32 Value) {
}

void UUWEEventTrackerComponent::ServerNotify_Implementation(FGameplayTag Verb, FGameplayTag Tag, int32 Value) {
}

void UUWEEventTrackerComponent::RegisterListenerVerb(FGameplayTag Verb, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::RegisterListenerAsset(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::RegisterListener(FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& OnTriggeredEvent) {
}

void UUWEEventTrackerComponent::NotifyAssetId(FGameplayTag Verb, FPrimaryAssetId AssetId, int32 Value) {
}

void UUWEEventTrackerComponent::NotifyAsset(FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value) {
}

void UUWEEventTrackerComponent::Notify(FGameplayTag Verb, FGameplayTag Tag, int32 Value) {
}

int32 UUWEEventTrackerComponent::GetValueVerb(FGameplayTag Verb) const {
    return 0;
}

int32 UUWEEventTrackerComponent::GetValueAsset(FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset) {
    return 0;
}

int32 UUWEEventTrackerComponent::GetValue(FGameplayTag Verb, FGameplayTag Tag) {
    return 0;
}

void UUWEEventTrackerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEEventTrackerComponent, ReplicatedEntries);
}


