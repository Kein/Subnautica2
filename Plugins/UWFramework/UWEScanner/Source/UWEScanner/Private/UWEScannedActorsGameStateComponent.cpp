#include "UWEScannedActorsGameStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWEScannedActorsGameStateComponent::UUWEScannedActorsGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void UUWEScannedActorsGameStateComponent::OnRep_RegisteredScannableActorsMapping() {
}

void UUWEScannedActorsGameStateComponent::ClearScannedActors() {
}

void UUWEScannedActorsGameStateComponent::BroadcastActorInstanceScanned_Implementation(APlayerState* PlayerState, AActor* Actor) {
}

void UUWEScannedActorsGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEScannedActorsGameStateComponent, RegisteredScannableActorsMapping);
}


