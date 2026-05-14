#include "UWEEnergyTool.h"
#include "Components/WidgetComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEEnergyTool::AUWEEnergyTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->BatteryType = NULL;
    this->EnergyLevel = -1.00f;
    this->MaxEnergyLevel = -1.00f;
    this->HologramScreenBackground = CreateDefaultSubobject<UWidgetComponent>(TEXT("HologramScreenBackground"));
    this->HologramScreenForeground = CreateDefaultSubobject<UWidgetComponent>(TEXT("HologramScreenForeground"));
    this->DesiredHologramScreenParentSocket = TEXT("HologramFX");
    this->bCanShowReloadPrompt = true;
    this->AmmoLowThreshold = 0.10f;
    this->AllowAmmoLowCue = false;
    this->HologramScreenBackground->SetupAttachment(EquippedMesh);
    this->HologramScreenForeground->SetupAttachment(EquippedMesh);
}

void AUWEEnergyTool::SetEnergyLevel(float InEnergyLevel) {
}

void AUWEEnergyTool::OnRep_MaxEnergyLevel() {
}

void AUWEEnergyTool::OnRep_EnergyLevel() {
}

void AUWEEnergyTool::OnRep_BatteryType() {
}

void AUWEEnergyTool::OnEnergyRefilledCallback(AActor* Who) {
}

void AUWEEnergyTool::OnEnergyEmptyCallback(AActor* Who) {
}

void AUWEEnergyTool::OnEnergyChangedCallback(AActor* Who) {
}

bool AUWEEnergyTool::HasEnergy() const {
    return false;
}

void AUWEEnergyTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEEnergyTool, BatteryType);
    DOREPLIFETIME(AUWEEnergyTool, BatteryItemId);
    DOREPLIFETIME(AUWEEnergyTool, EnergyLevel);
    DOREPLIFETIME(AUWEEnergyTool, MaxEnergyLevel);
}


