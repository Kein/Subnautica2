#include "UWETimeBasedDynamicEvent.h"

UUWETimeBasedDynamicEvent::UUWETimeBasedDynamicEvent() {
    this->SpawnDistance = 500.00f;
    this->TimeInterval = 30.00f;
    this->TickRate = 1.00f;
    this->CurrentTimeInterval = 0.00f;
}

void UUWETimeBasedDynamicEvent::CustomTick() {
}


