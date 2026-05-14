#include "UWEActionCondition.h"

UUWEActionCondition::UUWEActionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Context = EUWECallFunctionContext::Any;
}

bool UUWEActionCondition::CheckCondition(AActor* TriggeringActor) {
    return false;
}


