#include "UWEBiomodCrafterComponent.h"
#include "Net/UnrealNetwork.h"

UUWEBiomodCrafterComponent::UUWEBiomodCrafterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotCount = 6;
    this->CurrentInteractor = NULL;
    this->SaveHandle = NULL;
}

void UUWEBiomodCrafterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEBiomodCrafterComponent, CurrentInteractor);
}


