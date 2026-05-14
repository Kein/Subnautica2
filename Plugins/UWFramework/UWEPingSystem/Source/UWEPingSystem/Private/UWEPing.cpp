#include "UWEPing.h"

FUWEPing::FUWEPing() {
    this->ExpirationTimestamp = 0.00f;
    this->PingData = NULL;
    this->Owner = NULL;
    this->TrackingActor = NULL;
    this->bHasTrackingActor = false;
    this->PingActor = NULL;
    this->bDestroyOnTrackingActorDespawn = false;
}

