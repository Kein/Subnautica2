#include "SN2PlayerCharacter.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEAbilitySystemTagChangeAnalytics.h"
#include "UWEHealthSetComponent.h"
#include "UWEMechanicalSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWEPhysicalSetComponent.h"
#include "UWESurvivalSetComponent.h"
#include "UWEBiomodCrafterInteractionComponent.h"
#include "UWEFirstPersonCamera.h"
#include "UWECraftingComponent.h"
#include "UWEAlertSpeakerComponent.h"
#include "UWEDamageTracker.h"
#include "UWEGameplayCueDataHarvester.h"
#include "UWEEquipmentComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryRouterComponent.h"
#include "UWEToolbarComponent.h"
#include "UWECharacterMovementComponent.h"
#include "UWEPawnAttachmentOwner.h"
#include "UWEOverlapExpellerComponent.h"
#include "UWEScubaMaskComponent.h"
#include "UWETemperatureRegionTracker.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2BioreactorInteractionComponent.h"
#include "SN2GameConfigSettingsApplier.h"
#include "SN2OutOfBoundsCheckComponent.h"
#include "SN2PlayerArchetypeComponent.h"
#include "SN2ProcessorStationInteractionComponent.h"
#include "SN2RefineryRouterComponent.h"
#include "SN2RespawnComponent.h"
#include "SN2ReviveableComponent.h"

ASN2PlayerCharacter::ASN2PlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUWECharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bAlwaysRelevant = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Neck = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Neck"));
    this->Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Body"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Feet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Feet"));
    this->Hair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair"));
    this->CurrentMovementMode = MOVE_None;
    this->InventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("InventoryComponent"));
    this->CraftingComponent = CreateDefaultSubobject<UUWECraftingComponent>(TEXT("CraftingComponent"));
    this->EquippedItemsComponent = CreateDefaultSubobject<UUWEEquipmentComponent>(TEXT("EquippedItemsComponent"));
    this->ToolbarComponent = CreateDefaultSubobject<UUWEToolbarComponent>(TEXT("ToolbarComponent"));
    this->InventoryRouterComponent = CreateDefaultSubobject<UUWEInventoryRouterComponent>(TEXT("InventoryRouterComponent"));
    this->AlertSpeakerComponent = CreateDefaultSubobject<UUWEAlertSpeakerComponent>(TEXT("AlertSpeakerComponent"));
    this->ScubaMaskSections = CreateDefaultSubobject<UUWEScubaMaskComponent>(TEXT("ScubaMaskSections"));
    this->OutOfBoundsCheckComponent = CreateDefaultSubobject<USN2OutOfBoundsCheckComponent>(TEXT("OutOfBoundsCheckComponent"));
    this->DamageTracker = CreateDefaultSubobject<UUWEDamageTracker>(TEXT("DamageTracker"));
    this->RespawnComponent = CreateDefaultSubobject<USN2RespawnComponent>(TEXT("RespawnComponent"));
    this->StartupAttributes = NULL;
    this->FastSwimCheatGE = NULL;
    this->RespawnAttributes = NULL;
    this->OverlapExpellerComponent = CreateDefaultSubobject<UUWEOverlapExpellerComponent>(TEXT("OverlapExpellerComponent"));
    this->ReviveableComponent = CreateDefaultSubobject<USN2ReviveableComponent>(TEXT("ReviveableComponent"));
    this->PlayerArchetypeComponent = CreateDefaultSubobject<USN2PlayerArchetypeComponent>(TEXT("PlayerArchetypeComponent"));
    this->MinSpeedForFootstepSounds = 110.00f;
    this->Thumbnail = NULL;
    this->DisallowOnlyAllowAutonomousTickPoseForListenServer = true;
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->MechanicalSetComponent = CreateDefaultSubobject<UUWEMechanicalSetComponent>(TEXT("MechanicalSetComponent"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->SurvivalSetComponent = CreateDefaultSubobject<UUWESurvivalSetComponent>(TEXT("SurvivalSetComponent"));
    this->PhysicalSetComponent = CreateDefaultSubobject<UUWEPhysicalSetComponent>(TEXT("PhysicalSetComponent"));
    this->BiomodCrafterInteractionComponent = CreateDefaultSubobject<UUWEBiomodCrafterInteractionComponent>(TEXT("BiomodCrafterInteractionComponent"));
    this->ProcessorStationInteractionComponent = CreateDefaultSubobject<USN2ProcessorStationInteractionComponent>(TEXT("ProcessorStationInteractionComponent"));
    this->BioreactorInteractionComponent = CreateDefaultSubobject<USN2BioreactorInteractionComponent>(TEXT("BioreactorInteractionComponent"));
    this->TagChangeAnalytics = CreateDefaultSubobject<UUWEAbilitySystemTagChangeAnalytics>(TEXT("TagChangeAnalytics"));
    this->AttachmentOwnerComponent = CreateDefaultSubobject<UUWEPawnAttachmentOwner>(TEXT("PawnAttachmentOwner"));
    this->GameplayCueDataHarvester = CreateDefaultSubobject<UUWEGameplayCueDataHarvester>(TEXT("GameplayCueHarvester"));
    this->GameConfigSettingsApplier = CreateDefaultSubobject<USN2GameConfigSettingsApplier>(TEXT("ConfigSettingsApplier"));
    this->SwimAnimation = NULL;
    this->WalkAnimation = NULL;
    this->SN2PlayerInventoryUpgradeIncrement = 3;
    this->CloseToGroundThreshold = 300.00f;
    this->bIsCloseToGround = false;
    this->UWERemoteViewYaw = 0;
    this->UWERemoteViewPitch = 0;
    this->OutlineMaterial = NULL;
    this->DynamicOutlineMaterial = NULL;
    this->CameraComponent = CreateDefaultSubobject<UUWEFirstPersonCamera>(TEXT("Camera"));
    this->FirstPersonCamera = (UCameraComponent*)CameraComponent;
    this->VolumeTracker = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTracker"));
    this->VolumeTrackerHead = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTrackerHead"));
    this->VolumeTrackerFeet = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTrackerFeet"));
    this->RefineryRouterComponent = CreateDefaultSubobject<USN2RefineryRouterComponent>(TEXT("RefineryRouterComponent"));
    this->TemperatureTrackerComponent = CreateDefaultSubobject<UUWETemperatureRegionTracker>(TEXT("TemperatureRegionTracker"));
    this->CraftingInventorySearchRange = 1000.00f;
    this->RecentlySubmergedTagDuration = 10.00f;
    this->InBaseGracePeriod = 0.15f;
    this->HeadVolumeTrackerOffsetZ = -20.00f;
    this->bHasCompletedLifepodRide = false;
    this->SN2BasePlayerInventorySlots = 20;
    this->AllowDroppingItemsInBases = true;
    this->AllowDroppingItemsInSubmarine = true;
    this->SN2Depth_Shallow = 25;
    this->SN2Depth_Intermediate = 50;
    this->SN2Depth_Deep = 100;
    this->SN2Depth_VeryDeep = 500;
    this->SN2Depth_Extreme = 1500;
    this->SN2Depth_Abyssal = 3000;
    this->SN2Depth_Hadal = 5000;
    this->PendingCarryableActor = NULL;
    this->Body->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->CameraComponent->SetupAttachment(RootComponent);
    this->Feet->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FirstPersonCamera->SetupAttachment(RootComponent);
    this->Hair->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Hands->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Head->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Neck->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ScubaMaskSections->SetupAttachment(RootComponent);
    this->VolumeTracker->SetupAttachment(RootComponent);
    this->VolumeTrackerFeet->SetupAttachment(RootComponent);
    this->VolumeTrackerHead->SetupAttachment(RootComponent);
}

void ASN2PlayerCharacter::UpdateScubaMaskVisibility() const {
}

void ASN2PlayerCharacter::UpdateRotationSpeedMultiplier() {
}

void ASN2PlayerCharacter::UpdatePlayerVisibility() {
}

void ASN2PlayerCharacter::UpdateMaxSpeed() {
}


void ASN2PlayerCharacter::Unstuck_Implementation() {
}

bool ASN2PlayerCharacter::TryTeleportToPlayerStart() {
    return false;
}

bool ASN2PlayerCharacter::TryTeleportToBiobed() {
    return false;
}

void ASN2PlayerCharacter::StoreCarryable(AActor* Actor) {
}

void ASN2PlayerCharacter::StartCraftingSourcesAsyncUpdateLoop() {
}

void ASN2PlayerCharacter::SetPlayerDefaults() {
}

void ASN2PlayerCharacter::SetPlayerCharacterSavedData() {
}

void ASN2PlayerCharacter::SetLifepodRideCompleted() {
}

void ASN2PlayerCharacter::Server_SyncBaseAimRotation_Implementation(uint16 Yaw, uint16 Pitch) {
}

void ASN2PlayerCharacter::Server_InitiateDetachment_Implementation(bool FastForward) {
}

void ASN2PlayerCharacter::Respawn(TArray<UUWEItemType*> LostItems) {
}

void ASN2PlayerCharacter::RemoveCharacterPart(const FSN2CharacterPart& PartToRemove) {
}

void ASN2PlayerCharacter::RemoveAllCharacterParts() {
}


void ASN2PlayerCharacter::OnInteractWithOtherInventory(UUWEInventoryComponent* OtherInventory, UUWEInventoryInteractionComponent* InventoryInteraction) {
}

void ASN2PlayerCharacter::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

bool ASN2PlayerCharacter::IsStunned() const {
    return false;
}

void ASN2PlayerCharacter::InitiateDetachment(bool FastForward) {
}

void ASN2PlayerCharacter::HolsterCurrentToolImmediate() {
}

UVolumeTrackerComponent* ASN2PlayerCharacter::GetVolumeTracker() const {
    return NULL;
}

AUWESubmarine* ASN2PlayerCharacter::GetSubmarinePlayerIsIn() const {
    return NULL;
}

UUWECharacterMovementComponent* ASN2PlayerCharacter::GetSN2Movement() const {
    return NULL;
}

ASN2PlayerState* ASN2PlayerCharacter::GetPS() const {
    return NULL;
}

ASN2PlayerController* ASN2PlayerCharacter::GetPC() const {
    return NULL;
}

ASN2SubmarineOxygenator* ASN2PlayerCharacter::GetOxygenator() {
    return NULL;
}

FRotator ASN2PlayerCharacter::GetLocalBaseAimRotationNormalized() const {
    return FRotator{};
}

UUWEInventoryComponent* ASN2PlayerCharacter::GetInventory() {
    return NULL;
}

float ASN2PlayerCharacter::GetDepthMetersSanitized() {
    return 0.0f;
}

float ASN2PlayerCharacter::GetDepthInOcean() {
    return 0.0f;
}

float ASN2PlayerCharacter::GetDepthInCurrentVolume() {
    return 0.0f;
}

FGameplayTagContainer ASN2PlayerCharacter::GetCosmeticTagsForPart(EUWEPlayerCustomizationPartType PartType) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer ASN2PlayerCharacter::GetCosmeticTags() const {
    return FGameplayTagContainer{};
}

AUWESculpturalBaseActor* ASN2PlayerCharacter::GetBasePlayerIsIn(int32& StructureId) const {
    return NULL;
}

int32 ASN2PlayerCharacter::GetBaseInventorySlotCount() {
    return 0;
}

FRotator ASN2PlayerCharacter::GetBaseAimRotationNormalized() {
    return FRotator{};
}

UUWEAbilitySystemComponent* ASN2PlayerCharacter::GetASC() const {
    return NULL;
}

FRotator ASN2PlayerCharacter::GetActorWorldRotationNormalized() const {
    return FRotator{};
}

void ASN2PlayerCharacter::EquipLastToolImmediate() {
}

void ASN2PlayerCharacter::EquipLastTool() {
}

void ASN2PlayerCharacter::AnimVisualLog(const FString& Message) const {
}

void ASN2PlayerCharacter::AddCharacterPart(const FSN2CharacterPart& NewPart) {
}

void ASN2PlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2PlayerCharacter, UWERemoteViewYaw);
    DOREPLIFETIME(ASN2PlayerCharacter, UWERemoteViewPitch);
    DOREPLIFETIME(ASN2PlayerCharacter, CurrentOxygenator);
}


