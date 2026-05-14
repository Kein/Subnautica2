#include "UWERangeTracker.h"

UUWERangeTracker::UUWERangeTracker() {
}

void UUWERangeTracker::UnregisterTargetActor(AActor* Target) {
}

void UUWERangeTracker::UnregisterPeerActorWithRangeConfigTag(AActor* Peer, const FGameplayTag& RangeConfigTag) {
}

void UUWERangeTracker::UnregisterPeerActorWithRangeConfig(AActor* Peer, const FUWERangeTrackerPeerRangeConfig& RangeConfig) {
}

void UUWERangeTracker::UnregisterPeerActor(AActor* Peer) {
}

void UUWERangeTracker::RegisterTargetActor(AActor* Target) {
}

void UUWERangeTracker::RegisterPeerActor(AActor* Peer, const FUWERangeTrackerPeerRangeConfig& RangeConfig, const FUWERangeTrackerPeerRangeCallbacks& Callbacks) {
}

int32 UUWERangeTracker::GetPeerCount() {
    return 0;
}


