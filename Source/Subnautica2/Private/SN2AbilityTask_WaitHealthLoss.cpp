#include "SN2AbilityTask_WaitHealthLoss.h"

USN2AbilityTask_WaitHealthLoss::USN2AbilityTask_WaitHealthLoss() {
    this->HealthComponent = NULL;
}

USN2AbilityTask_WaitHealthLoss* USN2AbilityTask_WaitHealthLoss::WaitHealthLoss(UGameplayAbility* OwningAbility, bool OnlyOnce) {
    return NULL;
}

void USN2AbilityTask_WaitHealthLoss::OnHealthChanged(AActor* SourceActor, AActor* TargetActor, float OldHealth, float NewHealth) {
}


