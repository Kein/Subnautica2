#include "UWEPowerSystemComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPowerSystemComponent::UUWEPowerSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProximityTransmissionEnabled = false;
    this->PowerGeneration = 0.00f;
    this->PowerDrain = 0.00f;
    this->StoredPower = 0.00f;
    this->HiddenPower = 0.00f;
    this->DisabledReservePower = 0.00f;
    this->PowerCapacity = 0.00f;
    this->HiddenPowerCapacity = 0.00f;
    this->CorePowerRequirement = 0.00f;
    this->IsPowered = false;
    this->ShowPowerHUD = true;
}

void UUWEPowerSystemComponent::UpdatePowerSystemState(const FUWEPowerSimulationState& SystemState) {
}

void UUWEPowerSystemComponent::OnStoredPowerChanged() {
}

void UUWEPowerSystemComponent::OnRep_IsPowered() {
}

void UUWEPowerSystemComponent::InitPowerSystemSimulation(const FGuid& StructureSimulationId) {
}

bool UUWEPowerSystemComponent::GetPowerSystemAuthority() const {
    return false;
}

void UUWEPowerSystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPowerSystemComponent, PowerGeneration);
    DOREPLIFETIME(UUWEPowerSystemComponent, PowerDrain);
    DOREPLIFETIME(UUWEPowerSystemComponent, StoredPower);
    DOREPLIFETIME(UUWEPowerSystemComponent, HiddenPower);
    DOREPLIFETIME(UUWEPowerSystemComponent, DisabledReservePower);
    DOREPLIFETIME(UUWEPowerSystemComponent, PowerCapacity);
    DOREPLIFETIME(UUWEPowerSystemComponent, HiddenPowerCapacity);
    DOREPLIFETIME(UUWEPowerSystemComponent, CorePowerRequirement);
    DOREPLIFETIME(UUWEPowerSystemComponent, IsPowered);
}


