#include "UWEAICreatureHitData.h"

UUWEAICreatureHitData::UUWEAICreatureHitData() {
    this->HitEffectCount = 0;
    this->EffectToApplyOnHit = NULL;
    this->EffectToApplyOnHitCountExceeded = NULL;
}

UUWEAICreatureHitData* UUWEAICreatureHitData::GetCreatureHitDataForActor(const AActor* Actor) {
    return NULL;
}


