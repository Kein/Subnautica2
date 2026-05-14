#include "UWENetworkedAttachmentSocketInterpolationConfig.h"

FUWENetworkedAttachmentSocketInterpolationConfig::FUWENetworkedAttachmentSocketInterpolationConfig() {
    this->InterpolationType = EUWENetworkedAttachmentSocketInterpolationType::Exponential;
    this->ExponentialSpeed = 0.00f;
    this->TakeLinearSpeedFromActor = false;
    this->LinearSpeed = 0.00f;
}

