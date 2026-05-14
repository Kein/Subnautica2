#include "UWEPingMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPingMarkerComponent::UUWEPingMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->EnableVisibilityToggling = true;
    this->PingData = NULL;
    this->SaveHandle = NULL;
}

void UUWEPingMarkerComponent::OnProfanityFilterChanged(bool bProfanityFilterEnabled) {
}

void UUWEPingMarkerComponent::OnPingsChanged() {
}

void UUWEPingMarkerComponent::OnDynamicItemFullyRegistered() {
}

FText UUWEPingMarkerComponent::GetPingDisplayName() {
    return FText::GetEmpty();
}

void UUWEPingMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPingMarkerComponent, PingID);
}


