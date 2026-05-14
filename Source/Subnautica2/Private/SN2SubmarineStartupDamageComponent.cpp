#include "SN2SubmarineStartupDamageComponent.h"

USN2SubmarineStartupDamageComponent::USN2SubmarineStartupDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->Damage = 300.00f;
}


