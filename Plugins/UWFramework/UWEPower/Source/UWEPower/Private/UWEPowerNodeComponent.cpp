#include "UWEPowerNodeComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPowerNodeComponent::UUWEPowerNodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProximityTransmissionEnabled = true;
    this->TransmissionRadius = 0.00f;
    this->SaveHandle = NULL;
    this->Simulation = NULL;
    this->PowerSystem = NULL;
    this->PowerSystemProviderActor = NULL;
}

void UUWEPowerNodeComponent::UpdatePowerSystem(int32 NewStructureId) {
}

void UUWEPowerNodeComponent::UpdateNetwork(TSet<UUWEPowerNodeComponent*>& Visited) {
}

void UUWEPowerNodeComponent::SetProximityTransmissionEnabled(bool Enabled) {
}

void UUWEPowerNodeComponent::OnRep_DirectLinks() {
}

void UUWEPowerNodeComponent::OnNewPowerSystem(const FGuid& SystemId) {
}

void UUWEPowerNodeComponent::OnLinkRemoved(const FGuid& FromLinkId) {
}

void UUWEPowerNodeComponent::OnLinkCreated(const FGuid& ToLinkId) {
}

void UUWEPowerNodeComponent::OnBlockedLinkChanged(UUWEPowerNodeComponent* node, bool IsBlocked) {
}

void UUWEPowerNodeComponent::LinkChildActorPowerNodesToRoot(TArray<UChildActorComponent*> ChildActors, AActor* Other) {
}

void UUWEPowerNodeComponent::LinkAttachedActorPowerNodesToRoot(TArray<AActor*> AttachedActors, AActor* Root) {
}

FVector UUWEPowerNodeComponent::GetWorldTransmissionLocation() const {
    return FVector{};
}

UUWEPowerNodeSimulation* UUWEPowerNodeComponent::GetSimulationObject() const {
    return NULL;
}

bool UUWEPowerNodeComponent::GetProximityTransmissionEnabled() const {
    return false;
}

TSet<UUWEPowerNodeComponent*> UUWEPowerNodeComponent::GetProximityLinksByOverlap(const UObject* WorldContextObject, const FVector& Location, float Radius, bool ExcludeBlocked) {
    return TSet<UUWEPowerNodeComponent*>();
}

TSet<UUWEPowerNodeComponent*> UUWEPowerNodeComponent::GetProximityLinks(const UObject* WorldContextObject, const FVector& Location, float Radius, bool ExcludeBlocked) {
    return TSet<UUWEPowerNodeComponent*>();
}

UUWEPowerSystemComponent* UUWEPowerNodeComponent::GetPowerSystem() const {
    return NULL;
}

void UUWEPowerNodeComponent::GetOrCreateSimulationObject() {
}

float UUWEPowerNodeComponent::GetEfficiency() const {
    return 0.0f;
}

void UUWEPowerNodeComponent::CreateLinkToComponent(UUWEPowerNodeComponent* OtherComponent) {
}

void UUWEPowerNodeComponent::CreateLink(AActor* Other) {
}

void UUWEPowerNodeComponent::ClearLinks() {
}

void UUWEPowerNodeComponent::CheckForProximityLinks() {
}

void UUWEPowerNodeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPowerNodeComponent, DirectLinksArray);
}


