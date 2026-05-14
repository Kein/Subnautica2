#include "UWEDynamicEventsStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWEDynamicEventsStateComponent::UUWEDynamicEventsStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

bool UUWEDynamicEventsStateComponent::TryStartDynamicEventByTag(FGameplayTag EventTag, APlayerController* PlayerController) {
    return false;
}

bool UUWEDynamicEventsStateComponent::TryStartDynamicEvent(FUWEDynamicEventGroup& DynamicEvent, APlayerController* PlayerController) {
    return false;
}

void UUWEDynamicEventsStateComponent::LogDynamicEvent(const FString& Message, FGameplayTag EventTag) {
}

TArray<FUWEDynamicEventGroup> UUWEDynamicEventsStateComponent::GetAllEvents() const {
    return TArray<FUWEDynamicEventGroup>();
}

TArray<FUWEActiveDynamicEvent> UUWEDynamicEventsStateComponent::GetActiveEvents() const {
    return TArray<FUWEActiveDynamicEvent>();
}

void UUWEDynamicEventsStateComponent::ForceEndEvent(const FGuid& EventID, const FPrimaryAssetId& DynamicEventPrimaryAssetId) {
}

void UUWEDynamicEventsStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEDynamicEventsStateComponent, ReplicatedActiveEvents);
}


