#include "UWEGameplayCueNotify_ForceFeedbackEventInfo.h"

FUWEGameplayCueNotify_ForceFeedbackEventInfo::FUWEGameplayCueNotify_ForceFeedbackEventInfo() {
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bIsLooping = false;
    this->CurveType = EUWEForceFeedbackCurve::Descend;
    this->InterpMode = RCIM_Linear;
    this->Intensity = 0.00f;
    this->duration = 0.00f;
    this->bAffectsLeftSmall = false;
    this->bAffectsLeftLarge = false;
    this->bAffectsRightSmall = false;
    this->bAffectsRightLarge = false;
    this->WorldIntensity = 0.00f;
    this->ForceFeedbackEffect = NULL;
    this->WorldAttenuation = NULL;
}

