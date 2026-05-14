#include "UWEActorUIDAttachment.h"
#include "Net/UnrealNetwork.h"

UUWEActorUIDAttachment::UUWEActorUIDAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEActorUIDAttachment::OnRep_ActorUID() {
}

void UUWEActorUIDAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEActorUIDAttachment, ActorUId);
}


