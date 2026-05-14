#include "UWEAISpawnedActor.h"

FUWEAISpawnedActor::FUWEAISpawnedActor() {
    this->ScaleDeviationPercent = 0;
    this->bGroup = false;
    this->GroupMinSize = 0;
    this->GroupMaxSize = 0;
    this->Proportion = 0.00f;
    this->IgnoreCollisionBetweenMembers = false;
    this->bForceDisableLODs = false;
    this->ActorClassPtr = NULL;
}

