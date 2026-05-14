#include "SN2AbilityTask_WaitHoverTarget.h"

USN2AbilityTask_WaitHoverTarget::USN2AbilityTask_WaitHoverTarget() {
    this->TargetActor = NULL;
}

USN2AbilityTask_WaitHoverTarget* USN2AbilityTask_WaitHoverTarget::WaitHoverTargetSynced(UGameplayAbility* OwningAbility) {
    return NULL;
}

void USN2AbilityTask_WaitHoverTarget::OnTargetDataReplicatedCancelledCallback() {
}

void USN2AbilityTask_WaitHoverTarget::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}

void USN2AbilityTask_WaitHoverTarget::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void USN2AbilityTask_WaitHoverTarget::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data) {
}


