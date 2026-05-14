#include "UWEBattery.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEBattery::AUWEBattery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->EnergyLevel = -1.00f;
    this->MaxEnergyLevel = -1.00f;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
}

void AUWEBattery::SetEnergyLevel(float InEnergyLevel) {
}

float AUWEBattery::GetEnergyPercent() const {
    return 0.0f;
}

void AUWEBattery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEBattery, EnergyLevel);
    DOREPLIFETIME(AUWEBattery, MaxEnergyLevel);
}


