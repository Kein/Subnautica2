#include "SN2BlightNodesGameStateComponent.h"
#include "Net/UnrealNetwork.h"

USN2BlightNodesGameStateComponent::USN2BlightNodesGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void USN2BlightNodesGameStateComponent::OnRep_RemediatedNodesCopy() {
}

bool USN2BlightNodesGameStateComponent::HasBlightNodeBeenRemediated(const AActor* node) const {
    return false;
}

bool USN2BlightNodesGameStateComponent::HasBlightNodeAssetBeenRemediated(const USN2BlightNodeDataAsset* DataAsset) const {
    return false;
}

USN2BlightNodesGameStateComponent* USN2BlightNodesGameStateComponent::GetBlightNodesStateComponent(UObject* WorldContextObject) {
    return NULL;
}

USN2BlightNodeDataAsset* USN2BlightNodesGameStateComponent::GetBlightNodeDataAssetForActor(const AActor* node) {
    return NULL;
}

void USN2BlightNodesGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2BlightNodesGameStateComponent, RemediatedNodesCopy);
}


