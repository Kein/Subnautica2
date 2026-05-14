#include "UWEBTSGameplayEffect.h"

UUWEBTSGameplayEffect::UUWEBTSGameplayEffect() {
    this->NodeName = TEXT("Apply Gameplay Effect");
    this->GameplayEffectClass = NULL;
    this->bSetByCaller_Override = false;
    this->Magnitude = 0.00f;
    this->bDoNotRemoveEffect = false;
}


