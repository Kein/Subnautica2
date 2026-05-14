#include "UWEAbilityTask_WaitTargetDataBase.h"

UUWEAbilityTask_WaitTargetDataBase::UUWEAbilityTask_WaitTargetDataBase() {
    this->TargetActor = NULL;
}

void UUWEAbilityTask_WaitTargetDataBase::OnTargetDataReplicatedCancelledCallback() {
}

void UUWEAbilityTask_WaitTargetDataBase::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}

void UUWEAbilityTask_WaitTargetDataBase::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void UUWEAbilityTask_WaitTargetDataBase::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data) {
}


