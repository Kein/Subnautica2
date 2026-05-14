#include "UWEDynamicEvent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AUWEDynamicEvent::AUWEDynamicEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EventRootActor = NULL;
    this->EventKeyActor = NULL;
    this->MaxTimeActive = 300.00f;
    this->MaxDistanceFromRootActor = 300000.00f;
}

AActor* AUWEDynamicEvent::GetEventRootActor() const {
    return NULL;
}

AActor* AUWEDynamicEvent::GetEventKeyActor() const {
    return NULL;
}

FGuid AUWEDynamicEvent::GetEventID() const {
    return FGuid{};
}

AActor* AUWEDynamicEvent::FindClosestActorOfType(TSubclassOf<AActor> ActorClass, float& OutDistance) {
    return NULL;
}

void AUWEDynamicEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEDynamicEvent, EventID);
    DOREPLIFETIME(AUWEDynamicEvent, EventRootActor);
    DOREPLIFETIME(AUWEDynamicEvent, EventKeyActor);
}


