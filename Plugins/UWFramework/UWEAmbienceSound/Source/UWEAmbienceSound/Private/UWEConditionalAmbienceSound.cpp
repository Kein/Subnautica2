#include "UWEConditionalAmbienceSound.h"

UUWEConditionalAmbienceSound::UUWEConditionalAmbienceSound() {
    this->Event = NULL;
}

bool UUWEConditionalAmbienceSound::ShouldPlay_Implementation(APawn* LocalPawn) const {
    return false;
}

void UUWEConditionalAmbienceSound::SetParameter(FName Name, float Value) {
}

FString UUWEConditionalAmbienceSound::GetEventName() const {
    return TEXT("");
}



