#include "UWEPowerStorage.h"
#include "Net/UnrealNetwork.h"

UUWEPowerStorage::UUWEPowerStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseReservePower = false;
    this->MaxCharge = 10000.00f;
    this->CurrentCharge = 0.00f;
    this->ChargeRateLimit = 10.00f;
}

void UUWEPowerStorage::ServerToggleUseReservePower_Implementation() {
}

void UUWEPowerStorage::OnRep_UseReservePower() const {
}

void UUWEPowerStorage::OnRep_CurrentCharge() {
}

void UUWEPowerStorage::CurrentChargeChanged(float Charge) {
}

void UUWEPowerStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPowerStorage, UseReservePower);
    DOREPLIFETIME(UUWEPowerStorage, CurrentCharge);
}


