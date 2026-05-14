#include "SN2ToolHolderComponent.h"
#include "Net/UnrealNetwork.h"

USN2ToolHolderComponent::USN2ToolHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowPlacing = true;
    this->AttachedItemMesh = NULL;
    this->SocketName = TEXT("ToolAttachPoint");
    this->AttachedActor = NULL;
    this->SaveHandle = NULL;
    this->bActorRemoved = false;
}

void USN2ToolHolderComponent::OnRep_AttachedActor() {
}

bool USN2ToolHolderComponent::IsEmpty() const {
    return false;
}

AActor* USN2ToolHolderComponent::GetAttachedActor() const {
    return NULL;
}

bool USN2ToolHolderComponent::AttachItemByActor(AActor* Actor) {
    return false;
}

void USN2ToolHolderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2ToolHolderComponent, AttachedActor);
}


