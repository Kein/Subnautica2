#include "UWEShaderCacheStatistics.h"

FUWEShaderCacheStatistics::FUWEShaderCacheStatistics() {
    this->NumPrecompilesRemaining = 0;
    this->NumActivePrecacheRequests = 0;
    this->bIsPrecompiling = false;
    this->bIsBatchingPaused = false;
    this->bShouldHoldForPrecompiling = false;
}

