#include "SN2BlightNode.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

ASN2BlightNode::ASN2BlightNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->InfectionCenterPoint = CreateDefaultSubobject<USceneComponent>(TEXT("InfectionCenterPoint"));
    this->NodeState = EBlightNodeState::Active;
    this->ASC = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->DataAsset = NULL;
    this->CreatureSpawnInterval = 5.00f;
    this->MaxCreaturesToSpawn = 10;
    this->MaxCreaturesPerSpawn = 3;
    this->bDestroyActiveParasitesOnRemediate = true;
    this->LastSpawnTime = -1.00f;
    this->bFirstSpawn = true;
    this->InfectionCenterPoint->SetupAttachment(RootComponent);
}

void ASN2BlightNode::SpawnCreaturesLoop() {
}

void ASN2BlightNode::OnSpawnedCreatureKilled(AActor* SourceActor, AActor* TargetActor) {
}

void ASN2BlightNode::OnRep_NodeState() {
}

void ASN2BlightNode::OnBroken(ASN2BlightNodeDamagePoint* DamagePoint, const AActor* InInstigator) {
}

void ASN2BlightNode::OnActorEndOverlapImplementation(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASN2BlightNode::OnActorBeginOverlapImplementation(AActor* OverlappedActor, AActor* OtherActor) {
}

EBlightNodeState ASN2BlightNode::GetNodeState() const {
    return EBlightNodeState::Dormant;
}

int32 ASN2BlightNode::GetDestroyedDamagePointCount() const {
    return 0;
}

USN2BlightNodeDataAsset* ASN2BlightNode::GetBlightNodeDataAsset() const {
    return NULL;
}

void ASN2BlightNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BlightNode, NodeState);
    DOREPLIFETIME(ASN2BlightNode, DestroyedPoints);
}


