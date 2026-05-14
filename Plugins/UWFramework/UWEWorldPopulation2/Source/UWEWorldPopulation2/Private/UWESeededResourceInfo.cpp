#include "UWESeededResourceInfo.h"

FUWESeededResourceInfo::FUWESeededResourceInfo() {
    this->HandPlaced = false;
    this->TimeToRespawnSeconds = 0.00f;
    this->SpawnRangeMultiplier = 0.00f;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::Undefined;
}

