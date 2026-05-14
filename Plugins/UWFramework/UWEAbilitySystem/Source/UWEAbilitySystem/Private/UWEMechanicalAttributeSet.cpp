#include "UWEMechanicalAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWEMechanicalAttributeSet::UUWEMechanicalAttributeSet() {
    this->UWELowEnergyThresholdPct = 25.00f;
    this->UWEHighEnergyThresholdPct = 75.00f;
}

void UUWEMechanicalAttributeSet::OnRep_ScanSpeedScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::OnRep_RepairSpeedScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::OnRep_MaxEnergy(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::OnRep_EnergyModifier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::OnRep_Energy(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::OnRep_CrushDepth(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMechanicalAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEMechanicalAttributeSet, Energy);
    DOREPLIFETIME(UUWEMechanicalAttributeSet, MaxEnergy);
    DOREPLIFETIME(UUWEMechanicalAttributeSet, EnergyModifier);
    DOREPLIFETIME(UUWEMechanicalAttributeSet, CrushDepth);
    DOREPLIFETIME(UUWEMechanicalAttributeSet, ScanSpeedScalar);
    DOREPLIFETIME(UUWEMechanicalAttributeSet, RepairSpeedScalar);
}


