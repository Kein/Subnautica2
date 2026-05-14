#include "UWEPingSystemComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPingSystemComponent::UUWEPingSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconPingData = NULL;
    this->SaveHandle = NULL;
}

void UUWEPingSystemComponent::SetPingVisibilityForPlayer(APlayerState* PlayerState, FGuid UniqueID, bool bNewValue) {
}

void UUWEPingSystemComponent::SetPingThumbnailColor(const FGuid UniqueID, const FLinearColor NewThumbnailColor) {
}

void UUWEPingSystemComponent::SetPingLocation(const FGuid UniqueID, const FVector NewLocation) {
}

void UUWEPingSystemComponent::SetPingDisplayName(const FGuid UniqueID, const FText NewDisplayName) {
}

void UUWEPingSystemComponent::SetDefaultPingVisibility(FGuid UniqueID, bool bNewValue) {
}

void UUWEPingSystemComponent::RemovePing(const FGuid UniqueID) {
}

void UUWEPingSystemComponent::RemoveAllPings() {
}

void UUWEPingSystemComponent::OnRep_DefaultHiddenPings() {
}

void UUWEPingSystemComponent::OnRep_ActivePings() {
}

bool UUWEPingSystemComponent::IsPingIDAlreadyRegistered(const FGuid& UniqueID) {
    return false;
}

bool UUWEPingSystemComponent::IsPingHiddenForPlayer(FGuid Guid, const APlayerState* PlayerState) {
    return false;
}

FVector UUWEPingSystemComponent::GetPingLocation(bool& bOutPingFound, const FGuid UniqueID) {
    return FVector{};
}

FText UUWEPingSystemComponent::GetPingDisplayName(bool& bOutPingFound, const FGuid UniqueID) {
    return FText::GetEmpty();
}

void UUWEPingSystemComponent::AddPing(const FVector& Location, const FText& DisplayName, UUWEPingData* PingData, float Lifetime, AActor* Owner, AActor* TrackingActor, FGuid& OutUniqueId, bool bAllowDuplicatePings, bool bDestroyOnTrackingActorDespawn, FLinearColor PingColor) {
}

void UUWEPingSystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPingSystemComponent, ActivePings);
    DOREPLIFETIME(UUWEPingSystemComponent, DefaultHiddenPings);
    DOREPLIFETIME(UUWEPingSystemComponent, PingSettings);
}


