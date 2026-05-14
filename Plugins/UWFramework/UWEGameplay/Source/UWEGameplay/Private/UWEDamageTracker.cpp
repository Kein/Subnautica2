#include "UWEDamageTracker.h"
#include "Net/UnrealNetwork.h"

UUWEDamageTracker::UUWEDamageTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlushIntervalSeconds = 10.00f;
}

void UUWEDamageTracker::RegisterDamage(const FGameplayEventData& EventData) {
}

FGameplayEventData UUWEDamageTracker::GetLatestDamageEvent() {
    return FGameplayEventData{};
}

FVector UUWEDamageTracker::GetLastDamageLocation() const {
    return FVector{};
}

void UUWEDamageTracker::FlushDamageEvents() {
}

void UUWEDamageTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEDamageTracker, LastDamageEvent);
    DOREPLIFETIME(UUWEDamageTracker, LastDamageLocation);
}


