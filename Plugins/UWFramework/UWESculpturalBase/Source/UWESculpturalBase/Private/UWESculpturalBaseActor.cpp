#include "UWESculpturalBaseActor.h"
#include "Components/SceneComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AUWESculpturalBaseActor::AUWESculpturalBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ShouldHaveAirVolumes = true;
    this->IsIndividualGrid = false;
    this->GeneratePowerSystemsForStructures = true;
    this->InitialBaseData = NULL;
    this->NumSavedCells = 0;
    this->TotalCells = 0;
    this->InitialPiece = NULL;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->NextLockID = 0;
    this->NextStructureID = 0;
    this->ExternalLockID = -1;
    this->NextDeconstructGroupID = 0;
    this->NextDecoratorID = 0;
    this->Version = 0;
    this->LooseVersion = 0;
    this->LastUpdatedVersion = 0;
    this->SerializationWorker = NULL;
}

void AUWESculpturalBaseActor::OnStructureIsPoweredChanged(UUWEPowerSystemComponent* PowerSystem, bool IsPowered) {
}

void AUWESculpturalBaseActor::OnRep_StructureArray() {
}

void AUWESculpturalBaseActor::OnRep_BaseNetworkGUID() {
}

void AUWESculpturalBaseActor::OnLevelAddedToWorld(ULevel* Level, UWorld* World) {
}

bool AUWESculpturalBaseActor::HasOxygen(int32 StructureId) const {
    return false;
}

float AUWESculpturalBaseActor::GetStructureVolume(uint8 StructureId) const {
    return 0.0f;
}

FGameplayTag AUWESculpturalBaseActor::GetCellOriginalBrushType(FIntVector Coords) const {
    return FGameplayTag{};
}

FGameplayTag AUWESculpturalBaseActor::GetCellBrushType(FIntVector Coords) const {
    return FGameplayTag{};
}

FGameplayTag AUWESculpturalBaseActor::GetCellBaseBrushType(FIntVector Coords) const {
    return FGameplayTag{};
}

void AUWESculpturalBaseActor::GetActorsOfClassAttachedToStructure(TSubclassOf<AActor> Class, uint8 StructureId, TArray<AActor*>& OutActors) const {
}

TArray<AActor*> AUWESculpturalBaseActor::GetActorsAttachedToStructure(uint8 StructureId) const {
    return TArray<AActor*>();
}

void AUWESculpturalBaseActor::ForceFullBaseUpdate(bool ForInitialSetup, bool UpdateCells, bool UpdateProxies) {
}

void AUWESculpturalBaseActor::BroadcastMarkPropsRemovedByBase_Implementation(const TArray<FUWERemovedProp>& PropsToRemove) {
}

void AUWESculpturalBaseActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWESculpturalBaseActor, BaseNetworkGUID);
    DOREPLIFETIME(AUWESculpturalBaseActor, StructureArray);
    DOREPLIFETIME(AUWESculpturalBaseActor, NextDeconstructGroupID);
    DOREPLIFETIME(AUWESculpturalBaseActor, NextDecoratorID);
    DOREPLIFETIME(AUWESculpturalBaseActor, Version);
    DOREPLIFETIME(AUWESculpturalBaseActor, LooseVersion);
}


