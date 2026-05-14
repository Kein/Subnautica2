#include "UWEDynamicItemInfo.h"

FUWEDynamicItemInfo::FUWEDynamicItemInfo() {
    this->Timestamp = 0.00f;
    this->LifeSpan = 0.00f;
    this->bRemoveIfOutOfRange = false;
    this->bWasSimulatingPhysics = false;
    this->Actor = NULL;
}

