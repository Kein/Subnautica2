#include "UWEBTSTargetAlteration.h"

UUWEBTSTargetAlteration::UUWEBTSTargetAlteration() {
    this->NodeName = TEXT("Target Alteration");
    this->RestoreOriginalTarget = true;
    this->ReactOnCollision = false;
    this->ReactOnCollisionChance = 1.00f;
    this->ReactOnPerceivedActors = false;
    this->ReactOnPerceivedActorsChance = 1.00f;
}


