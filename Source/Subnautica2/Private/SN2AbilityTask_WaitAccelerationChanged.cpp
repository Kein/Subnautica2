#include "SN2AbilityTask_WaitAccelerationChanged.h"

USN2AbilityTask_WaitAccelerationChanged::USN2AbilityTask_WaitAccelerationChanged() {
    this->CurrentAccelerationLength = 0.00f;
    this->bHasAcceleration = false;
    this->MovementComponent = NULL;
}

USN2AbilityTask_WaitAccelerationChanged* USN2AbilityTask_WaitAccelerationChanged::WaitAccelerationChanged(UGameplayAbility* OwningAbility, UUWECharacterMovementComponentBase* InMovementComponent) {
    return NULL;
}


