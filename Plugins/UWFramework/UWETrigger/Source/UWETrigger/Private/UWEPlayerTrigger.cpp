#include "UWEPlayerTrigger.h"
#include "Components/BoxComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEPlayerTrigger::AUWEPlayerTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->bOnEnterTriggered = false;
    this->bOnExitTriggered = false;
    this->SaveHandle = NULL;
}

void AUWEPlayerTrigger::OnRep_Triggered() {
}

void AUWEPlayerTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEPlayerTrigger, bOnEnterTriggered);
    DOREPLIFETIME(AUWEPlayerTrigger, bOnExitTriggered);
    DOREPLIFETIME(AUWEPlayerTrigger, EnteredPlayerIds);
    DOREPLIFETIME(AUWEPlayerTrigger, ExitedPlayerIds);
}


