#include "SN2EmbeddedDeconstructComponent.h"
#include "Net/UnrealNetwork.h"

USN2EmbeddedDeconstructComponent::USN2EmbeddedDeconstructComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemoveCells = false;
    this->CachedEditAction = NULL;
}

void USN2EmbeddedDeconstructComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2EmbeddedDeconstructComponent, RemoveCells);
    DOREPLIFETIME(USN2EmbeddedDeconstructComponent, BrushType);
}


