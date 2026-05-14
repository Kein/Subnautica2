#include "UWEGameplayCueNotify_CameraShakeEventInfo.h"

FUWEGameplayCueNotify_CameraShakeEventInfo::FUWEGameplayCueNotify_CameraShakeEventInfo() {
    this->CameraShake = NULL;
    this->InnerAttenuationRadius = 0.00f;
    this->OuterAttenuationRadius = 0.00f;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bConvertToForceFeedback = false;
    this->ForceFeedbackIntensity = 0.00f;
}

