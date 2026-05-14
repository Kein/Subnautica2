#include "UWEPingSystemCommandComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPingSystemCommandComponent::UUWEPingSystemCommandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEPingSystemCommandComponent::ServerSetThumbnailColor_Implementation(const FGuid UniqueID, const FLinearColor& NewThumbnailColor) {
}

void UUWEPingSystemCommandComponent::ServerSetPingDisplayName_Implementation(const FGuid UniqueID, const FText& NewDisplayName) {
}

void UUWEPingSystemCommandComponent::ServerRemovePing_Implementation(const FGuid UniqueID) {
}

void UUWEPingSystemCommandComponent::ServerAddPlayerPing_Implementation(const FVector& Location, const FText& DisplayName, float Lifetime, UUWEPingData* PingData, AActor* TrackingActor) {
}

void UUWEPingSystemCommandComponent::ServerAddPing_Implementation(const FVector& Location, const FText& DisplayName, float Lifetime, UUWEPingData* PingData) {
}

void UUWEPingSystemCommandComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPingSystemCommandComponent, PingUniqueId);
}


