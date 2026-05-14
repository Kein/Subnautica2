#include "UWEListenPlayerInRange.h"

UUWEListenPlayerInRange::UUWEListenPlayerInRange() {
    this->Peer = NULL;
}

void UUWEListenPlayerInRange::OnPeerEndPlay(AActor* InPeer, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UUWEListenPlayerInRange* UUWEListenPlayerInRange::ListenPlayerInRange(AActor* InPeer, const FUWERangeTrackerPeerRangeConfig& InRangeConfig) {
    return NULL;
}


