#include "UWEHealthAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWEHealthAttributeSet::UUWEHealthAttributeSet() {
    this->UWELowHealthThresholdPct = 25.00f;
    this->UWEHighHealthThresholdPct = 75.00f;
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdHotMedium(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdHotLow(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdHotHigh(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdColdMedium(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdColdLow(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_TemperatureDamageThresholdColdHigh(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_Temperature(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_RadiationThreshold(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_RadiationAbsorbed(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_Radiation(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_MoveTowardsSafeTemperatureRate(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_MaxHealth(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_MaxBiomodStability(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_InternalTemperature(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_HeatAccumulationRate(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_Health(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplierRadiation(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplierPhysical(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplierHeat(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplierElectrical(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplierCold(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_DamageMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_ColdAccumulationRate(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::OnRep_BiomodStability(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEHealthAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEHealthAttributeSet, Health);
    DOREPLIFETIME(UUWEHealthAttributeSet, MaxHealth);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplier);
    DOREPLIFETIME(UUWEHealthAttributeSet, Radiation);
    DOREPLIFETIME(UUWEHealthAttributeSet, RadiationAbsorbed);
    DOREPLIFETIME(UUWEHealthAttributeSet, RadiationThreshold);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplierRadiation);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplierElectrical);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplierPhysical);
    DOREPLIFETIME(UUWEHealthAttributeSet, Temperature);
    DOREPLIFETIME(UUWEHealthAttributeSet, InternalTemperature);
    DOREPLIFETIME(UUWEHealthAttributeSet, HeatAccumulationRate);
    DOREPLIFETIME(UUWEHealthAttributeSet, ColdAccumulationRate);
    DOREPLIFETIME(UUWEHealthAttributeSet, MoveTowardsSafeTemperatureRate);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplierCold);
    DOREPLIFETIME(UUWEHealthAttributeSet, DamageMultiplierHeat);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdColdLow);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdColdMedium);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdColdHigh);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdHotLow);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdHotMedium);
    DOREPLIFETIME(UUWEHealthAttributeSet, TemperatureDamageThresholdHotHigh);
    DOREPLIFETIME(UUWEHealthAttributeSet, BiomodStability);
    DOREPLIFETIME(UUWEHealthAttributeSet, MaxBiomodStability);
}


