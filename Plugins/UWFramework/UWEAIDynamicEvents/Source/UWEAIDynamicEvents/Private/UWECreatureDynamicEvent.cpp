#include "UWECreatureDynamicEvent.h"

UUWECreatureDynamicEvent::UUWECreatureDynamicEvent() {
    this->bGroup = false;
    this->GroupMinSize = 2;
    this->GroupMaxSize = 2;
    this->GroupScaleDeviationPercent = 0;
    this->IgnoreCollisionBetweenMembers = false;
    this->GroupScaleDeviationType = UWEAIScaleDeviationType::Random;
    this->SpawnEnvQuery = NULL;
    this->EnvQueryRunMode = EEnvQueryRunMode::SingleResult;
}

void UUWECreatureDynamicEvent::OnEQSQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus) {
}

void UUWECreatureDynamicEvent::OnActorEventEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


