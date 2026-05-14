#include "UWEGenericButton.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEGenericButton::AUWEGenericButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DisplayTextKey = TEXT("Use");
    this->Cooldown = 0.00f;
    this->MaxInteractionDistance = 0.00f;
    this->bTriggered = false;
    this->bTurnedOn = false;
    this->InteractableState = EUWEButtonInteractabilityState::Unset;
    this->TimeLastTriggered = 0.00f;
    this->SaveHandle = NULL;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->ClientTimeLastTriggered = 0.00f;
}

void AUWEGenericButton::SetInteractabilityOn() {
}

void AUWEGenericButton::SetInteractabilityOff() {
}

void AUWEGenericButton::OnRep_TurnedOn() {
}

void AUWEGenericButton::OnRep_TimeLastTriggered() {
}

void AUWEGenericButton::OnRep_InteractableState() {
}


bool AUWEGenericButton::IsInteractable() const {
    return false;
}

bool AUWEGenericButton::IsAlreadyTriggeredForPlayer(AActor* Player) const {
    return false;
}

void AUWEGenericButton::BroadcastButtonPressed_Implementation(APawn* InteractingPawn) {
}

void AUWEGenericButton::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEGenericButton, bTriggered);
    DOREPLIFETIME(AUWEGenericButton, bTurnedOn);
    DOREPLIFETIME(AUWEGenericButton, InteractableState);
    DOREPLIFETIME(AUWEGenericButton, TriggeredPlayerIds);
    DOREPLIFETIME(AUWEGenericButton, TimeLastTriggered);
}


