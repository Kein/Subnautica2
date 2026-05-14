#include "UWEWorldPopResourceDA.h"

UUWEWorldPopResourceDA::UUWEWorldPopResourceDA() {
    this->DisplayName = FText::FromString(TEXT("Not Set"));
    this->ScaleDeviationPercentage = 0;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->TimeToRespawnSeconds = -1.00f;
    this->SpawnRangeMultiplier = 0.50f;
    this->AdjustForActorBounds = false;
}


