#include "UWEAIGroupingParams.h"

FUWEAIGroupingParams::FUWEAIGroupingParams() {
    this->MinSize = 0;
    this->MaxSize = 0;
    this->ScaleDeviationPercent = 0;
    this->ScaleDeviationType = UWEAIScaleDeviationType::Random;
    this->IgnoreCollisionBetweenMembers = false;
    this->bForceDisableLODs = false;
}

