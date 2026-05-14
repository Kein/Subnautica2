#include "UWEBTSApplyDamage.h"

UUWEBTSApplyDamage::UUWEBTSApplyDamage() {
    this->NodeName = TEXT("Apply Damage");
    this->Damage = 5.00f;
    this->bContinuous = false;
    this->bRemoveEffect = true;
    this->Period = 1.00f;
    this->duration = 0.00f;
}

bool UUWEBTSApplyDamage::IsAttackTagEmpty() const {
    return false;
}


