#include "UWEUnlockableStatics.h"

UUWEUnlockableStatics::UUWEUnlockableStatics() {
}

bool UUWEUnlockableStatics::IsAssetUnlockedThroughUnlockComponent(UObject* WorldContextObject, UUWEPrimaryDataAssetBase* UnlockableAsset) {
    return false;
}

FUWEUnlockNotificationPackage UUWEUnlockableStatics::GetNotificationPackage(UUWEPrimaryDataAssetBase* Asset) {
    return FUWEUnlockNotificationPackage{};
}


