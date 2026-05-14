#include "UWEPingSystemStatics.h"

UUWEPingSystemStatics::UUWEPingSystemStatics() {
}

bool UUWEPingSystemStatics::IsPingVisibleToPlayer(UObject* WorldContextObject, const FGuid& UniqueID, const APlayerState* PlayerState) {
    return false;
}

UUWEPingSystemComponent* UUWEPingSystemStatics::GetPingSystemComponent(UObject* WorldContextObject) {
    return NULL;
}

UUWEPingData* UUWEPingSystemStatics::GetPingDataByType(FGameplayTag PingTypeTag) {
    return NULL;
}


