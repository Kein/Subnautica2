#include "SN2WorldBuilderProject.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2WorldBuilderProject::ASN2WorldBuilderProject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ConstructActionData = NULL;
    this->bHideBrokenMeshDuringGhost = true;
    this->BrokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrokenMesh"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->RequiredStorygoalForGhost = NULL;
    this->ConstructionState = ESN2WorldBuilderProjectState::WaitingForBioScan;
    this->BrokenMesh->SetupAttachment(RootComponent);
}

void ASN2WorldBuilderProject::OnRequiredBioScanCompleted(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void ASN2WorldBuilderProject::OnRep_ConstructionState() {
}

void ASN2WorldBuilderProject::OnBuilderConstructionCompleted(bool bWasConstructed) {
}

void ASN2WorldBuilderProject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2WorldBuilderProject, ConstructionState);
}


