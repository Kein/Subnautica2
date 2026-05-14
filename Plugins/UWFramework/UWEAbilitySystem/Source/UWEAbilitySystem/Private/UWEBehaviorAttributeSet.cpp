#include "UWEBehaviorAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWEBehaviorAttributeSet::UUWEBehaviorAttributeSet() {
    this->UWELowTemperThresholdPct = 25.00f;
    this->UWEHighTemperThresholdPct = 75.00f;
    this->UWELowStaminaThresholdPct = 25.00f;
    this->UWEHighStaminaThresholdPct = 75.00f;
    this->UWELowInfectionThresholdPct = 25.00f;
    this->UWEHighInfectionThresholdPct = 75.00f;
}

void UUWEBehaviorAttributeSet::OnRep_Temper(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_MaxTemper(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_MaxReachedTemper(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_MaxInfection(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::OnRep_Infection(const FGameplayAttributeData& OldValue) {
}

void UUWEBehaviorAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEBehaviorAttributeSet, Temper);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, MaxTemper);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, MaxReachedTemper);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, Stamina);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, MaxStamina);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, Infection);
    DOREPLIFETIME(UUWEBehaviorAttributeSet, MaxInfection);
}


