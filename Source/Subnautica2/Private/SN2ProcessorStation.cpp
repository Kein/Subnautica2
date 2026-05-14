#include "SN2ProcessorStation.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWEPoweredApplianceComponent.h"
#include "UWESaveComponent.h"
#include "UWEAttachableComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2ProcessorStationRecipeSelection.h"

ASN2ProcessorStation::ASN2ProcessorStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CurrentRecipe = NULL;
    this->CurrentOutputCount = 0;
    this->ProcessorState = ESN2ProcessorState::NoRecipe;
    this->ProcessingProgress = 0.00f;
    this->ProcessingContinuousPowerConsumption = 10.00f;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->RecipeSelectionInteraction = CreateDefaultSubobject<USN2ProcessorStationRecipeSelection>(TEXT("RecipeSelectionInteraction"));
    this->InputInventory = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InputInventory"));
    this->OutputInventory = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("OutputInventory"));
    this->OutputInventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("OutputInventoryInteraction"));
    this->PoweredApplianceComponent = CreateDefaultSubobject<UUWEPoweredApplianceComponent>(TEXT("PoweredApplianceComponent"));
    this->AttachableComponent = CreateDefaultSubobject<UUWEAttachableComponent>(TEXT("AttachableComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->RootCategory = NULL;
    this->ProcessorUpdateInterval = 0.10f;
    this->ProcessorUpdateMultiplier = 1.00f;
    this->bPlayerInRange = false;
    this->ListenPlayerInRange = NULL;
    this->OutputInventoryInteraction->SetupAttachment(RootComponent);
    this->RecipeSelectionInteraction->SetupAttachment(RootComponent);
}

void ASN2ProcessorStation::UpdateProcessorState(bool FirstLoad) {
}

void ASN2ProcessorStation::UpdateProcessingCompletionState() {
}


void ASN2ProcessorStation::SetProcessorUpdateMultiplier_Implementation(float NewProcessorUpdateMultiplier) {
}

void ASN2ProcessorStation::QueueUpdate() {
}

void ASN2ProcessorStation::OnRep_ProcessorState(ESN2ProcessorState OldValue) {
}

void ASN2ProcessorStation::OnRep_CurrentRecipe() {
}

void ASN2ProcessorStation::OnRep_CurrentOutputCount(int32 OldValue) {
}

void ASN2ProcessorStation::OnProcessingStart_Implementation() {
}



void ASN2ProcessorStation::OnPoweredStateChanged(bool bNewIsPowered) {
}

void ASN2ProcessorStation::OnPlayerOutOfRange() {
}

void ASN2ProcessorStation::OnPlayerInRange() {
}

void ASN2ProcessorStation::OnAttached(AActor* AttachedTo) {
}

USN2ProcessorStationViewModel* ASN2ProcessorStation::MakeViewModel(USN2ProcessorStationInteractionComponent* InteractionComponent) {
    return NULL;
}

bool ASN2ProcessorStation::IsFull() const {
    return false;
}

float ASN2ProcessorStation::GetNextProcessingProgress() const {
    return 0.0f;
}

float ASN2ProcessorStation::GetFabricationTime() const {
    return 0.0f;
}

ESN2ProcessorState ASN2ProcessorStation::GetCurrentState() const {
    return ESN2ProcessorState::NoRecipe;
}

UUWECraftingRecipe* ASN2ProcessorStation::GetCurrentRecipe() const {
    return NULL;
}

int32 ASN2ProcessorStation::GetCurrentOutputCount() const {
    return 0;
}


void ASN2ProcessorStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2ProcessorStation, CurrentRecipe);
    DOREPLIFETIME(ASN2ProcessorStation, CurrentOutputCount);
    DOREPLIFETIME(ASN2ProcessorStation, ProcessorState);
    DOREPLIFETIME(ASN2ProcessorStation, ProcessingProgress);
    DOREPLIFETIME(ASN2ProcessorStation, ProcessorUpdateMultiplier);
}


