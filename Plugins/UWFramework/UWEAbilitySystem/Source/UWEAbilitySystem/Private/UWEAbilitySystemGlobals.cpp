#include "UWEAbilitySystemGlobals.h"

UUWEAbilitySystemGlobals::UUWEAbilitySystemGlobals() {
    this->GameplayCueNotifyPaths.AddDefaulted(1);
}

void UUWEAbilitySystemGlobals::TryEndTask(UGameplayTask* Task) {
}

UUWEAbilitySystemComponent* UUWEAbilitySystemGlobals::GetUWEAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent) {
    return NULL;
}

UAbilitySystemComponent* UUWEAbilitySystemGlobals::GetAnyAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent) {
    return NULL;
}

void UUWEAbilitySystemGlobals::ExecuteGameplayCueUnpredicted(UAbilitySystemComponent* ASC, const FGameplayTag& CueTag, const FGameplayCueParameters& Parameters) {
}


