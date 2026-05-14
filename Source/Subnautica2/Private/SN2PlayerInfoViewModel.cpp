#include "SN2PlayerInfoViewModel.h"

USN2PlayerInfoViewModel::USN2PlayerInfoViewModel() {
    this->Ping = 0.00f;
    this->bUnStuckAllowed = true;
    this->bShouldShowCheats = true;
}

void USN2PlayerInfoViewModel::Shutdown() {
}

void USN2PlayerInfoViewModel::OnCheatTagChanged(FGameplayTag GameplayTag, int32 I) {
}

void USN2PlayerInfoViewModel::Initialize(ASN2PlayerState* InPlayerState) {
}

void USN2PlayerInfoViewModel::HandlePlayerNameChanged(const FString& NewName) {
}


