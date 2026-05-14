#include "UWESculpturalBaseGlobalsComponent.h"
#include "Net/UnrealNetwork.h"

UUWESculpturalBaseGlobalsComponent::UUWESculpturalBaseGlobalsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextPlayerFacingBaseID = 1;
    this->GlobalCellCount = 0;
    this->SaveHandle = NULL;
}

void UUWESculpturalBaseGlobalsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESculpturalBaseGlobalsComponent, GlobalCellCount);
}


