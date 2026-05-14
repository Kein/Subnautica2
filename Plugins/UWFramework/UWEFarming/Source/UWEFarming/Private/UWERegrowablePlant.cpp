#include "UWERegrowablePlant.h"
#include "Components/StaticMeshComponent.h"
#include "UWEHealthSetComponent.h"
#include "UWEAssetDataComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWERegrowablePlant::AUWERegrowablePlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ReplacesActor = NULL;
    this->bReplacesActorSet = false;
    this->AssetDataComponent = CreateDefaultSubobject<UUWEAssetDataComponent>(TEXT("AssetDataComponent"));
    this->MaxGrowth = 200.00f;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AUWERegrowablePlant::TryFindReplacedActor() {
}

void AUWERegrowablePlant::OnRep_ReplacesActor() {
}

void AUWERegrowablePlant::OnRep_GrowthData() {
}

void AUWERegrowablePlant::OnFullyGrown() {
}

void AUWERegrowablePlant::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

void AUWERegrowablePlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWERegrowablePlant, ReplacesActor);
    DOREPLIFETIME(AUWERegrowablePlant, GrowthData);
}


