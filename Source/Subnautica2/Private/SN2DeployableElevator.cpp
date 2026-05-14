#include "SN2DeployableElevator.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "UWEInteractableStaticMesh.h"
#include "UWEPawnAttachmentOwner.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2DeployableElevator::ASN2DeployableElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->CallElevatorDelay = 1.00f;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->PawnAttachmentOwner = CreateDefaultSubobject<UUWEPawnAttachmentOwner>(TEXT("PawnAttachmentOwner"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->ElevatorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ElevatorMesh"));
    this->ElevatorTube = CreateDefaultSubobject<UUWEInteractableStaticMesh>(TEXT("ElevatorTube"));
    this->StoredLocation = 0.00f;
    this->DestinationLocation = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->MaxDepth = 2000.00f;
    this->Speed = 2000.00f;
    this->ElevatorMesh->SetupAttachment(RootComponent);
    this->ElevatorTube->SetupAttachment(RootComponent);
}

void ASN2DeployableElevator::SetMaxDepth(float InMaxDepth) {
}

void ASN2DeployableElevator::SetDestinationLocation(float NewLocation) {
}

void ASN2DeployableElevator::OnRep_MaxDepth() {
}

void ASN2DeployableElevator::OnRep_DestinationLocation() {
}

void ASN2DeployableElevator::OnElevatorTubeInteracted(AController* Controller, APawn* Pawn, const FHitResult& HitResult) {
}

void ASN2DeployableElevator::OnDetachFinished(AActor* Actor, const FName& SlotName) {
}

float ASN2DeployableElevator::GetMinLocation() const {
    return 0.0f;
}

float ASN2DeployableElevator::GetMaxLocation() const {
    return 0.0f;
}

float ASN2DeployableElevator::GetLocationFraction() const {
    return 0.0f;
}

float ASN2DeployableElevator::GetElevatorDepth(const UObject* WorldContextObject, AActor* Elevator, FVector StartingLocation, float InMaxDepth, float InTraceRadius, bool ShowDebug) {
    return 0.0f;
}

float ASN2DeployableElevator::GetCurrentLocation() const {
    return 0.0f;
}

void ASN2DeployableElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2DeployableElevator, StoredLocation);
    DOREPLIFETIME(ASN2DeployableElevator, DestinationLocation);
    DOREPLIFETIME(ASN2DeployableElevator, MaxDepth);
}


