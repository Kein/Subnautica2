#include "UWEGameModeBase.h"

AUWEGameModeBase::AUWEGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStart = NULL;
}

void AUWEGameModeBase::SetPlayerStart(AUWEPlayerStart* NewPlayerStart) {
}

AUWEPlayerStart* AUWEGameModeBase::GetPlayerStart() const {
    return NULL;
}


