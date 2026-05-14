#include "SN2Bioreactor.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEPowerGeneratorComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2BioreactorInteractBoxComponent.h"

ASN2Bioreactor::ASN2Bioreactor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->PowerGeneratorComponent = CreateDefaultSubobject<UUWEPowerGeneratorComponent>(TEXT("PowerGeneratorComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->CurrentItemType = NULL;
    this->PreConsumedPercentage = 0.00f;
    this->CurrentDepletionStartGameplayTime = 0.00f;
    this->CurrentDepletionEndGameplayTime = 0.00f;
    this->CurrentState = ESN2BioreactorPowerConsumptionState::Normal;
    this->InteractBoxComponent = CreateDefaultSubobject<USN2BioreactorInteractBoxComponent>(TEXT("InteractBoxComponent"));
    this->WorldViewModel = NULL;
    this->InteractBoxComponent->SetupAttachment(RootComponent);
}

void ASN2Bioreactor::SetCurrentState(ESN2BioreactorPowerConsumptionState NewState) {
}

void ASN2Bioreactor::OnRep_CurrentState() {
}

void ASN2Bioreactor::OnRep_CurrentItemType() const {
}

void ASN2Bioreactor::OnPowerSimOutputChanged(float NewOutput) {
}

void ASN2Bioreactor::OnPowerSimItemChanged(UUWEItemType* ItemType) {
}

void ASN2Bioreactor::OnInventoryIdAssigned() {
}

void ASN2Bioreactor::InitNewPowerSimulation(UUWEPowerNodeSimulation* Simulation) {
}

USN2BioreactorViewModel* ASN2Bioreactor::GetWorldViewModel() {
    return NULL;
}

float ASN2Bioreactor::GetRemainingEnergyPercentage() const {
    return 0.0f;
}

ESN2BioreactorPowerConsumptionState ASN2Bioreactor::GetCurrentPowerState() const {
    return ESN2BioreactorPowerConsumptionState::Off;
}

float ASN2Bioreactor::GetCurrentPowerOutput() const {
    return 0.0f;
}

UUWEItemType* ASN2Bioreactor::GetCurrentItemType() const {
    return NULL;
}

void ASN2Bioreactor::DiscardCurrentItem() {
}

void ASN2Bioreactor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2Bioreactor, CurrentItemType);
    DOREPLIFETIME(ASN2Bioreactor, PreConsumedPercentage);
    DOREPLIFETIME(ASN2Bioreactor, CurrentDepletionStartGameplayTime);
    DOREPLIFETIME(ASN2Bioreactor, CurrentDepletionEndGameplayTime);
    DOREPLIFETIME(ASN2Bioreactor, CurrentState);
}


