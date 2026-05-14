#include "UWEBTTInterpolateTo.h"

UUWEBTTInterpolateTo::UUWEBTTInterpolateTo() {
    this->NodeName = TEXT("UWE Interpolate To");
    this->InterpolationType = EUUWEBTTInterpolateToInterpolationType::Linear;
    this->ExponentialSpeed = 4.00f;
    this->TakeLinearSpeedFromActor = true;
    this->LinearSpeed = 100.00f;
}


