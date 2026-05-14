#include "UWEBTDUtilityFactorCooldown.h"

UUWEBTDUtilityFactorCooldown::UUWEBTDUtilityFactorCooldown() {
    this->NodeName = TEXT("Utility Cooldown");
    this->CoolDownTime = 5.00f;
    this->CoolDownType = UWEAIUtilityFactorCooldownType::Always;
}


