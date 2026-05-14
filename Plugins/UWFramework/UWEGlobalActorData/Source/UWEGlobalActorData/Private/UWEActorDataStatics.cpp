#include "UWEActorDataStatics.h"

UUWEActorDataStatics::UUWEActorDataStatics() {
}

void UUWEActorDataStatics::SetFloatValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, float Value) {
}

void UUWEActorDataStatics::SetBoolValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool Value) {
}

float UUWEActorDataStatics::GetFloatValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool& Valid) {
    return 0.0f;
}

bool UUWEActorDataStatics::GetBoolValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool& Valid) {
    return false;
}

AUWEActorDataGroup* UUWEActorDataStatics::GetActorDataGroup(const UObject* WorldContextObject, FGameplayTag Identifier) {
    return NULL;
}


