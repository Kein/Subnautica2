#include "UWEGameplayCueNotify_SpawnCondition.h"

FUWEGameplayCueNotify_SpawnCondition::FUWEGameplayCueNotify_SpawnCondition() {
    this->LocallyControlledSource = EGameplayCueNotify_LocallyControlledSource::InstigatorActor;
    this->LocallyControlledPolicy = EGameplayCueNotify_LocallyControlledPolicy::Always;
    this->ChanceToPlay = 0.00f;
    this->TargetToCheckTags = EUWEGameplayCueTagQueryCheck_Target::None;
}

