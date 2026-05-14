#include "SN2SubmarineFloodManager.h"
#include "Net/UnrealNetwork.h"

USN2SubmarineFloodManager::USN2SubmarineFloodManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalFloodLevel = 0.00f;
    this->FloodingStartPercentageThreshold = 0.03f;
    this->SubmarineFloodedPercentageThreshold = 0.90f;
    this->DamageComponent = NULL;
}

void USN2SubmarineFloodManager::OnRep_TotalFloodLevel() {
}

void USN2SubmarineFloodManager::OnDamageChanged() {
}

void USN2SubmarineFloodManager::OnConnectionChanged() {
}

float USN2SubmarineFloodManager::GetTotalFloodLevel() const {
    return 0.0f;
}

void USN2SubmarineFloodManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2SubmarineFloodManager, TotalFloodLevel);
}


