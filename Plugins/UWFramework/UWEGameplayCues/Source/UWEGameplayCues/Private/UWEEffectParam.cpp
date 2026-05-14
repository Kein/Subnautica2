#include "UWEEffectParam.h"

FUWEEffectParam::FUWEEffectParam() {
    this->Source = EUWEEffectParamSource::Target;
    this->FetchFunction = UWEParamFetchFunction::Velocity;
    this->Axis = EUWEVectorAxis::All;
    this->bLocalSpace = false;
    this->bUseHitLocation = false;
    this->CustomFetchFunction = NULL;
    this->bNormalize = false;
    this->Multiplier = 0.00f;
    this->DefaultValue = 0.00f;
    this->bAbsoluteValues = false;
    this->bInvert = false;
    this->bUseMinValue = false;
    this->MinValue = 0.00f;
    this->OverrideMaxValue = 0.00f;
    this->EvalCurve = NULL;
    this->StaticValue = 0.00f;
    this->ActivationThreshold = EUWEEffectActivationThreshold::None;
    this->ActivationValue = 0.00f;
    this->bDebug = false;
    this->FetchFunctionInstance = NULL;
}

