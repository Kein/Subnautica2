#include "UWEADGBroadcastComponent_Bool.h"
#include "Net/UnrealNetwork.h"

UUWEADGBroadcastComponent_Bool::UUWEADGBroadcastComponent_Bool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEADGBroadcastComponent_Bool::StartBoolChange(const FUWEActorDataChange_Bool& DataChange) {
}

void UUWEADGBroadcastComponent_Bool::OnRep_CurrentBoolChange() {
}

bool UUWEADGBroadcastComponent_Bool::GetValue() const {
    return false;
}

void UUWEADGBroadcastComponent_Bool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEADGBroadcastComponent_Bool, CurrentBoolChange);
}


