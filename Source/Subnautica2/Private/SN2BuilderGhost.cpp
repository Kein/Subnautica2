#include "SN2BuilderGhost.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "UWESaveComponent.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2BuilderGhostPlacementComponent.h"
#include "SN2ConstructableComponent.h"

ASN2BuilderGhost::ASN2BuilderGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->VolumeTracker = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTracker"));
    this->PlacementComponent = CreateDefaultSubobject<USN2BuilderGhostPlacementComponent>(TEXT("PlacementComponent"));
    this->ConstructableComponent = CreateDefaultSubobject<USN2ConstructableComponent>(TEXT("ConstructableComponent"));
    this->bMaterialBoundsDirty = 0;
    this->IsHovered = false;
    this->IsWaitingForBaseUpdates = false;
    this->CustomizerChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("CustomizerChildActor"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->CustomizerChildActor->SetupAttachment(RootComponent);
    this->VolumeTracker->SetupAttachment(RootComponent);
}

void ASN2BuilderGhost::UpdateMaterial(float Progress) {
}

void ASN2BuilderGhost::SetGhostParams(const FSN2BuilderGhostParams& NewGhostParams) {
}

void ASN2BuilderGhost::ResetConstructionProgress() {
}

void ASN2BuilderGhost::OnRep_GhostParams() {
}

void ASN2BuilderGhost::OnRep_ActorMeshTransforms() {
}

void ASN2BuilderGhost::OnBaseReplicationFinished() {
}

bool ASN2BuilderGhost::IsPlacementLegal(FSN2GhostPlacement GhostPlacement) const {
    return false;
}

FBox ASN2BuilderGhost::GetLocalBounds(bool IgnorePlacementVolumes) const {
    return FBox{};
}

FGuid ASN2BuilderGhost::GetGUID() const {
    return FGuid{};
}

FSN2BuilderGhostParams ASN2BuilderGhost::GetGhostParams() const {
    return FSN2BuilderGhostParams{};
}

FBox ASN2BuilderGhost::GetConstructedAreaBounds() const {
    return FBox{};
}

void ASN2BuilderGhost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BuilderGhost, GhostParams);
    DOREPLIFETIME(ASN2BuilderGhost, Guid);
    DOREPLIFETIME(ASN2BuilderGhost, ActorMeshTransforms);
}


