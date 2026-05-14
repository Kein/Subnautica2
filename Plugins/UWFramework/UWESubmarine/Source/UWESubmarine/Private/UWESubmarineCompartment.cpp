#include "UWESubmarineCompartment.h"
#include "Net/UnrealNetwork.h"

UUWESubmarineCompartment::UUWESubmarineCompartment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideLeaking = false;
    this->CompartmentVolume = 0.00f;
    this->WaterVolume = 0.00f;
    this->WaterThroughPut = 0.00f;
    this->FloodLevel = 0.00f;
    this->BaseLightIntensity = 2000.00f;
    this->MechanicalComponent = NULL;
    this->WaterVolumeActor = NULL;
}

void UUWESubmarineCompartment::SetWaterVolume(float InWaterVolume) {
}

void UUWESubmarineCompartment::SetFloodLevel(float InFloodLevel) {
}

void UUWESubmarineCompartment::OnRep_FloodLevel() {
}

void UUWESubmarineCompartment::OnEnergyRefilled(AActor* Who) {
}

void UUWESubmarineCompartment::OnEnergyEmpty(AActor* Who) {
}

float UUWESubmarineCompartment::GetWaterVolume() const {
    return 0.0f;
}

float UUWESubmarineCompartment::GetFloodLevel() const {
    return 0.0f;
}

float UUWESubmarineCompartment::GetCompartmentVolume() const {
    return 0.0f;
}

float UUWESubmarineCompartment::AddWaterVolume(float InWaterVolume) {
    return 0.0f;
}

void UUWESubmarineCompartment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESubmarineCompartment, FloodLevel);
}


