#include "SN2EMTTorsionAbility.h"

USN2EMTTorsionAbility::USN2EMTTorsionAbility() {
    this->SN2EMTTorsionInteractDistance = 200.00f;
    this->SN2EMTTorsionTargetLossAngle = 10.00f;
    this->Multiplier = 1.00f;
}

void USN2EMTTorsionAbility::OnTargetLost() {
}

void USN2EMTTorsionAbility::OnEnergyDepleted() {
}

void USN2EMTTorsionAbility::OnAbilityActiveTick(float DeltaTime) {
}


