#include "UWESubmarinePilotComponent.h"
#include "Net/UnrealNetwork.h"

UUWESubmarinePilotComponent::UUWESubmarinePilotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubmarineMovement = NULL;
    this->Submarine = NULL;
}

void UUWESubmarinePilotComponent::SubmitControl_Implementation(int8 InYawControl, FVector InDirectionControl) {
}

void UUWESubmarinePilotComponent::RequestStopPiloting_Implementation(const TArray<FVector>& RequestedEjectLocations) {
}

void UUWESubmarinePilotComponent::RequestartPiloting_Implementation(AUWESubmarine* InSubmarine) {
}

void UUWESubmarinePilotComponent::OnRep_Submarine(AUWESubmarine* OldSubmarine) {
}

AUWESubmarine* UUWESubmarinePilotComponent::GetSubmarine() const {
    return NULL;
}

void UUWESubmarinePilotComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESubmarinePilotComponent, Submarine);
}


