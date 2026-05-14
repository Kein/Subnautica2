#include "SN2AbilityTask_UpdatePlacementGhost.h"

USN2AbilityTask_UpdatePlacementGhost::USN2AbilityTask_UpdatePlacementGhost() {
    this->ActionData = NULL;
}

USN2AbilityTask_UpdatePlacementGhost* USN2AbilityTask_UpdatePlacementGhost::UpdatePlacementGhost(UGameplayAbility* OwningAbility, ASN2BuilderGhost* NewGhost, USN2BuilderConstructActionData* NewActionData) {
    return NULL;
}

FGameplayTag USN2AbilityTask_UpdatePlacementGhost::GetCannotActivateReason() const {
    return FGameplayTag{};
}

bool USN2AbilityTask_UpdatePlacementGhost::CanRotate() const {
    return false;
}


