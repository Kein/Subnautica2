#include "UWEADGBroadcastComponent_Float.h"
#include "Net/UnrealNetwork.h"

UUWEADGBroadcastComponent_Float::UUWEADGBroadcastComponent_Float(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEADGBroadcastComponent_Float::StartFloatChange(const FUWEActorDataChange_Float& DataChange) {
}

void UUWEADGBroadcastComponent_Float::OnRep_CurrentFloatChange() {
}

float UUWEADGBroadcastComponent_Float::GetValue() const {
    return 0.0f;
}

void UUWEADGBroadcastComponent_Float::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEADGBroadcastComponent_Float, CurrentFloatChange);
}


