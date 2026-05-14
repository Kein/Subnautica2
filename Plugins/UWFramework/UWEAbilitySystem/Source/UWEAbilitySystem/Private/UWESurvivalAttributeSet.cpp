#include "UWESurvivalAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWESurvivalAttributeSet::UUWESurvivalAttributeSet() {
    this->UWELowOxygenThresholdPct = 25.00f;
    this->UWEHighOxygenThresholdPct = 75.00f;
    this->UWELowFoodThresholdPct = 25.00f;
    this->UWEHighFoodThresholdPct = 75.00f;
    this->UWELowWaterThresholdPct = 25.00f;
    this->UWEHighWaterThresholdPct = 75.00f;
}

void UUWESurvivalAttributeSet::OnRep_Water(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_SuffocationRateScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_StarvationRateScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_Oxygen(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_NominalDepthMeters(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_MaxWater(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_MaxOxygen(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_MaxFood(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_HydrationRateScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_Food(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::OnRep_DehydrationRateScalar(const FUWEGameplayAttributeData& OldValue) {
}

void UUWESurvivalAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESurvivalAttributeSet, Oxygen);
    DOREPLIFETIME(UUWESurvivalAttributeSet, MaxOxygen);
    DOREPLIFETIME(UUWESurvivalAttributeSet, Food);
    DOREPLIFETIME(UUWESurvivalAttributeSet, MaxFood);
    DOREPLIFETIME(UUWESurvivalAttributeSet, StarvationRateScalar);
    DOREPLIFETIME(UUWESurvivalAttributeSet, Water);
    DOREPLIFETIME(UUWESurvivalAttributeSet, MaxWater);
    DOREPLIFETIME(UUWESurvivalAttributeSet, DehydrationRateScalar);
    DOREPLIFETIME(UUWESurvivalAttributeSet, HydrationRateScalar);
    DOREPLIFETIME(UUWESurvivalAttributeSet, NominalDepthMeters);
    DOREPLIFETIME(UUWESurvivalAttributeSet, SuffocationRateScalar);
}


