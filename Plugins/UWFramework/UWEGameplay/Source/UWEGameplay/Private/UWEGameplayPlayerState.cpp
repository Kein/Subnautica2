#include "UWEGameplayPlayerState.h"
#include "Net/UnrealNetwork.h"

AUWEGameplayPlayerState::AUWEGameplayPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainPlayerCharacter = NULL;
}

void AUWEGameplayPlayerState::ServerSetMainPlayerCharacter_Implementation(ACharacter* NewCharacter) {
}

void AUWEGameplayPlayerState::OnRep_MainPlayerCharacter() {
}

UTexture2D* AUWEGameplayPlayerState::GetPlayerIcon() const {
    return NULL;
}

FColor AUWEGameplayPlayerState::GetPlayerColor() const {
    return FColor{};
}

ACharacter* AUWEGameplayPlayerState::GetMainPlayerCharacter() const {
    return NULL;
}

AActor* AUWEGameplayPlayerState::GetHoverTarget() const {
    return NULL;
}

FHitResult AUWEGameplayPlayerState::GetHoverHitResult() const {
    return FHitResult{};
}

void AUWEGameplayPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEGameplayPlayerState, MainPlayerCharacter);
}


