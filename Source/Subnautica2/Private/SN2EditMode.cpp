#include "SN2EditMode.h"

FSN2EditMode::FSN2EditMode() {
    this->IsDeconstruct = false;
    this->OverrideDefaultInvalidPreviewActorDistance = false;
    this->InvalidPreviewActorDistance = 0.00f;
    this->OverrideTraceDistance = false;
    this->TraceDistance = 0.00f;
    this->IgnoreBuildAhead = false;
    this->AllowModeChangingWithNoBrush = false;
}

