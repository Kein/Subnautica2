#include "SN2ReviveAbility.h"

USN2ReviveAbility::USN2ReviveAbility() {
    this->SN2ReviveDistance = 500.00f;
    this->SN2ReviveTargetLossAngle = 80.00f;
    this->SN2ReviveDuration = 5.00f;
}

void USN2ReviveAbility::OnTick(float DeltaTime) {
}

void USN2ReviveAbility::OnTargetLost() {
}

float USN2ReviveAbility::GetReviveDuration() {
    return 0.0f;
}


