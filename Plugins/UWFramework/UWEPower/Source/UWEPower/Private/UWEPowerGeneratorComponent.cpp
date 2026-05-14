#include "UWEPowerGeneratorComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWEPowerGeneratorSimulation.h"

UUWEPowerGeneratorComponent::UUWEPowerGeneratorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasePowerGeneration = 0.00f;
    this->PowerSimulationClass = UUWEPowerGeneratorSimulation::StaticClass();
}

void UUWEPowerGeneratorComponent::SetPowerGeneration(float PowerGeneration) {
}

void UUWEPowerGeneratorComponent::OnRep_BasePowerGeneration() {
}

float UUWEPowerGeneratorComponent::GetCurrentPowerGeneration() const {
    return 0.0f;
}

float UUWEPowerGeneratorComponent::CalculatePowerGenerationScale_Implementation() const {
    return 0.0f;
}

void UUWEPowerGeneratorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPowerGeneratorComponent, BasePowerGeneration);
}


