#include "UWEAbilityTask_WaitMiniGameCompleted.h"

UUWEAbilityTask_WaitMiniGameCompleted::UUWEAbilityTask_WaitMiniGameCompleted() {
    this->TargetActor = NULL;
}

UUWEAbilityTask_WaitMiniGameCompleted* UUWEAbilityTask_WaitMiniGameCompleted::WaitMiniGameCompleted(UGameplayAbility* OwningAbility) {
    return NULL;
}

void UUWEAbilityTask_WaitMiniGameCompleted::SetCompletionResult(FUWEMiniGameCompletion InCompletionResult) {
}

void UUWEAbilityTask_WaitMiniGameCompleted::OnTargetDataReplicatedCancelledCallback() {
}

void UUWEAbilityTask_WaitMiniGameCompleted::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}

void UUWEAbilityTask_WaitMiniGameCompleted::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void UUWEAbilityTask_WaitMiniGameCompleted::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data) {
}


