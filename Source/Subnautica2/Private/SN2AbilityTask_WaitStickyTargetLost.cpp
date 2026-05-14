#include "SN2AbilityTask_WaitStickyTargetLost.h"

USN2AbilityTask_WaitStickyTargetLost::USN2AbilityTask_WaitStickyTargetLost() {
    this->OutOfRangeTimeLimit = 0.00f;
    this->OutOfFOVTimeLimit = 0.00f;
    this->OutOfLOSTimeLimit = 0.00f;
}

USN2AbilityTask_WaitStickyTargetLost* USN2AbilityTask_WaitStickyTargetLost::WaitStickyTargetLost(UGameplayAbility* OwningAbility, USceneComponent* InScanTarget, float InTargetLossAngle, float InMaxRange, FVector HitLocation, bool CheckLOS, float NewOutOfRangeTimeLimit, float NewOutOfFOVTimeLimit, float NewOutOfLOSTimeLimit) {
    return NULL;
}


