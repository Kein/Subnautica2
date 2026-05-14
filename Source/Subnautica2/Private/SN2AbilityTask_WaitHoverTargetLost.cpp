#include "SN2AbilityTask_WaitHoverTargetLost.h"

USN2AbilityTask_WaitHoverTargetLost::USN2AbilityTask_WaitHoverTargetLost() {
    this->bSticky = false;
    this->TargetLossAngle = 100.00f;
    this->TargetLossRange = 1500.00f;
}

USN2AbilityTask_WaitHoverTargetLost* USN2AbilityTask_WaitHoverTargetLost::WaitHoverTargetLost(UGameplayAbility* OwningAbility, bool NewBSticky, float NewTargetLossRange, float NewTargetLossAngle) {
    return NULL;
}


