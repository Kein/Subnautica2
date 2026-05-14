#include "UWEGameplayCueNotify_DecalEventInfo.h"

FUWEGameplayCueNotify_DecalEventInfo::FUWEGameplayCueNotify_DecalEventInfo() {
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->DecalMaterial = NULL;
    this->bOverrideFadeOut = false;
    this->FadeOutStartDelay = 0.00f;
    this->FadeOutDuration = 0.00f;
}

