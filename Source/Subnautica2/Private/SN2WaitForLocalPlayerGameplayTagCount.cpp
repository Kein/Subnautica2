#include "SN2WaitForLocalPlayerGameplayTagCount.h"

USN2WaitForLocalPlayerGameplayTagCount::USN2WaitForLocalPlayerGameplayTagCount() {
    this->WorldContext = NULL;
}

USN2WaitForLocalPlayerGameplayTagCount* USN2WaitForLocalPlayerGameplayTagCount::WaitForLocalPlayerGameplayTagCount(UObject* WorldContextObject, FGameplayTag NewGameplayTag) {
    return NULL;
}

void USN2WaitForLocalPlayerGameplayTagCount::OnLocalPlayerReady() {
}

void USN2WaitForLocalPlayerGameplayTagCount::OnAbilitySystemTagCountChanged(FGameplayTag Tag, int32 NewCount) {
}


