#include "SN2ImpactBounceCameraAnimation.h"

USN2ImpactBounceCameraAnimation::USN2ImpactBounceCameraAnimation() {
    this->SN2JumpLandReboundRate = 130.00f;
    this->SN2ImpactVelocityCamDrag = 6.00f;
    this->SN2MaxCameraBounceOffset = 20.00f;
}

void USN2ImpactBounceCameraAnimation::OnCharacterLanded(const FHitResult& Hit) {
}


