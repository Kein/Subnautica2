#include "SN2AbilityTask_WaitHeldItemChanged.h"

USN2AbilityTask_WaitHeldItemChanged::USN2AbilityTask_WaitHeldItemChanged() {
    this->EquipmentComponent = NULL;
    this->PriorHeldTool = NULL;
}

USN2AbilityTask_WaitHeldItemChanged* USN2AbilityTask_WaitHeldItemChanged::WaitHeldItemChanged(UGameplayAbility* OwningAbility, bool TriggerIfSetOnStart, bool OnlyOnce) {
    return NULL;
}

void USN2AbilityTask_WaitHeldItemChanged::OnEquippedChanged() {
}


