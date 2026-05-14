#include "SN2AbilityTask_ScanHoverActor.h"

USN2AbilityTask_ScanHoverActor::USN2AbilityTask_ScanHoverActor() {
    this->ScanPeriod = 0.10f;
    this->ScanData = NULL;
}

void USN2AbilityTask_ScanHoverActor::StopTask(bool bCancelled) {
}

USN2AbilityTask_ScanHoverActor* USN2AbilityTask_ScanHoverActor::ScanHoverActor(UGameplayAbility* OwningAbility) {
    return NULL;
}


