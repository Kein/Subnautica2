#include "UWEDecoratorComponent.h"
#include "Net/UnrealNetwork.h"

UUWEDecoratorComponent::UUWEDecoratorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
    this->bShowAsGhost = false;
    this->DecoratorID = 4294967295;
    this->ReplicationTest = 0;
}

void UUWEDecoratorComponent::RegisterDecoratorWithBase(AUWESculpturalBaseActor* base) {
}

void UUWEDecoratorComponent::OnRep_ShowAsGhost() {
}

void UUWEDecoratorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEDecoratorComponent, bShowAsGhost);
    DOREPLIFETIME(UUWEDecoratorComponent, OwnerUID);
    DOREPLIFETIME(UUWEDecoratorComponent, BaseGUID);
    DOREPLIFETIME(UUWEDecoratorComponent, DecoratorID);
    DOREPLIFETIME(UUWEDecoratorComponent, ReplicationTest);
}


