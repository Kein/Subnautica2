#include "SN2BaseCharacter.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "UWECharacterMovementComponentBase.h"
#include "UWECollisionImpactComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2BaseCharacter::ASN2BaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUWECharacterMovementComponentBase>(TEXT("CharMoveComp"))) {
    this->AttachedToOwner = NULL;
    this->CollisionImpactComponent = CreateDefaultSubobject<UUWECollisionImpactComponent>(TEXT("CollisionImpactComponent"));
    this->AIPerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->DefaultInputMappingContext = NULL;
    this->ClassicInputMappingContext = NULL;
    this->AlternateInputMappingContext = NULL;
    this->InputMappingPriority = 0;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->CurrentMappingContext = NULL;
    this->UWEAbilitySystemComponent = NULL;
    this->bPossessed = false;
}

void ASN2BaseCharacter::UnlockStoryGoalOnServer_Implementation(UUWEStoryGoal* StoryGoal) {
}

void ASN2BaseCharacter::SetInputMappingContext(UInputMappingContext* InInputMappingContext) {
}

void ASN2BaseCharacter::SetDefaultInputMappingContext() {
}

void ASN2BaseCharacter::ServerAcknowledgeAutonomousProxyReady_Implementation() {
}

void ASN2BaseCharacter::RemoveInputMappingContext(UInputMappingContext* InInputMappingContext) {
}

void ASN2BaseCharacter::OnRep_Possessed() {
}

void ASN2BaseCharacter::OnGlobalTagRemoved(const FGameplayTag& GameplayTag) {
}

void ASN2BaseCharacter::OnGlobalTagAdded(const FGameplayTag& GameplayTag) {
}

void ASN2BaseCharacter::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

FTransform ASN2BaseCharacter::GetInteractTransform() {
    return FTransform{};
}

TEnumAsByte<EPhysicalSurface> ASN2BaseCharacter::GetFloorSurfaceType() const {
    return SurfaceType_Default;
}

ESN2PlayerPerspective ASN2BaseCharacter::GetCurrentPlayerPerspective() const {
    return ESN2PlayerPerspective::FirstPerson;
}

void ASN2BaseCharacter::EnableDefaultUseControllerRotation(bool Enable) {
}



void ASN2BaseCharacter::AddInputVector(FVector WorldDirection, bool bForceUnitVector) {
}

void ASN2BaseCharacter::AddInputMappingContext(UInputMappingContext* InInputMappingContext, int32 Priority) {
}

void ASN2BaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BaseCharacter, SaveData);
    DOREPLIFETIME(ASN2BaseCharacter, bPossessed);
}


