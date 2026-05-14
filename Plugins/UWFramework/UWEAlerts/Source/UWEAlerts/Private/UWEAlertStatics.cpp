#include "UWEAlertStatics.h"

UUWEAlertStatics::UUWEAlertStatics() {
}

void UUWEAlertStatics::RemoveAlert(AActor* Target, FGameplayTag AlertTag, FGameplayTag SeverityTag) {
}

FGameplayEffectSpecHandle UUWEAlertStatics::AddAlert(AActor* Target, FGameplayTag AlertTag, FGameplayTag SeverityTag, float duration) {
    return FGameplayEffectSpecHandle{};
}


