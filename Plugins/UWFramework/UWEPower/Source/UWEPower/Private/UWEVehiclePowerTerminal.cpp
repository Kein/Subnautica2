#include "UWEVehiclePowerTerminal.h"

AUWEVehiclePowerTerminal::AUWEVehiclePowerTerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = NULL;
    this->InventoryComponent = NULL;
    this->InventoryInteraction = NULL;
    this->Mesh = NULL;
}

void AUWEVehiclePowerTerminal::UndockVehicle() {
}

void AUWEVehiclePowerTerminal::DockVehicle(AActor* InVehicle) {
}


