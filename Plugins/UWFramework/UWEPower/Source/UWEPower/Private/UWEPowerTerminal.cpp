#include "UWEPowerTerminal.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWEPowerTerminalComponent.h"

AUWEPowerTerminal::AUWEPowerTerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Input Inventory"));
    this->InventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("InventoryInteraction"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->PowerTerminalComponent = CreateDefaultSubobject<UUWEPowerTerminalComponent>(TEXT("UWEPoweredApplianceComponent"));
    this->NumInitialEmptyBatteries = 0;
    this->ChargingEnabled = true;
    this->ChargeRate = 0.00f;
    this->DrainPerChargingBattery = 0.00f;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->InventoryInteraction->SetupAttachment(RootComponent);
}

void AUWEPowerTerminal::UpdateBatteries() {
}

void AUWEPowerTerminal::ServerToggleChargingEnabled_Implementation() {
}

void AUWEPowerTerminal::OnRep_ChargingEnabled() const {
}

void AUWEPowerTerminal::OnBatteryRemoved(const FUWEInventoryItem& InventoryItem) {
}

void AUWEPowerTerminal::OnBatteryAdded(const FUWEInventoryItem& InventoryItem) {
}

bool AUWEPowerTerminal::GetBatteryData(int32 Slot, FUWETerminalBatteryData& Data) const {
    return false;
}

void AUWEPowerTerminal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEPowerTerminal, BatteryData);
    DOREPLIFETIME(AUWEPowerTerminal, ChargingEnabled);
}


