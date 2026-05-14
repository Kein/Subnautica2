#include "UWEMovementAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWEMovementAttributeSet::UUWEMovementAttributeSet() {
}

void UUWEMovementAttributeSet::OnRep_WaterCurrentTwistAngleMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_WaterCurrentSpeedMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_WaterCurrentCentricAngleMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_RotationSpeedMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_MaxWalkSpeed(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_MaxSwimSpeed(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_DashOxygenCost(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::OnRep_DashDurationMultiplier(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEMovementAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEMovementAttributeSet, MaxWalkSpeed);
    DOREPLIFETIME(UUWEMovementAttributeSet, MaxSwimSpeed);
    DOREPLIFETIME(UUWEMovementAttributeSet, RotationSpeedMultiplier);
    DOREPLIFETIME(UUWEMovementAttributeSet, WaterCurrentSpeedMultiplier);
    DOREPLIFETIME(UUWEMovementAttributeSet, WaterCurrentCentricAngleMultiplier);
    DOREPLIFETIME(UUWEMovementAttributeSet, WaterCurrentTwistAngleMultiplier);
    DOREPLIFETIME(UUWEMovementAttributeSet, DashDurationMultiplier);
    DOREPLIFETIME(UUWEMovementAttributeSet, DashOxygenCost);
}


