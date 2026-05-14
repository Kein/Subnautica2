#include "UWEReplicationGraphSettings.h"

UUWEReplicationGraphSettings::UUWEReplicationGraphSettings() {
    this->bEnableFastSharedPath = true;
    this->DynamicActorFrequencyBuckets = 3;
    this->SpatialGridSize = 10000.00f;
    this->SpatialGridWorldSize = 1632000.00f;
    this->ClassSettings.AddDefaulted(11);
}


