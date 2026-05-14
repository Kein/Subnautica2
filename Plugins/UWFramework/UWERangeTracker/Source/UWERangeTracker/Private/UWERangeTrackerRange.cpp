#include "UWERangeTrackerRange.h"

FUWERangeTrackerRange::FUWERangeTrackerRange() {
    this->Lower = 0.00f;
    this->Upper = 0.00f;
    this->InfiniteUpper = false;
    this->EnableTargetViewConeCheck = false;
    this->TargetViewConeHalfAngle = 0.00f;
}

