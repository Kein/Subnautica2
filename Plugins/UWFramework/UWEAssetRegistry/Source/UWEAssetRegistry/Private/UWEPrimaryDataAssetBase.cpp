#include "UWEPrimaryDataAssetBase.h"

UUWEPrimaryDataAssetBase::UUWEPrimaryDataAssetBase() {
    this->PublishedStatus = EUWEPublishedStatus::Published;
}

bool UUWEPrimaryDataAssetBase::IsPublished() const {
    return false;
}


