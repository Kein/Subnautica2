#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerCameraManagerSettings.h"
#include "EUWEPlayerCustomizationPartType.h"
#include "UWEPlayerCustomizationSet.h"
#include "UWEPlayerCustomizationTargetInterface.h"
#include "AbilitySystemReadyDelegate.h"
#include "SN2BaseCharacter.h"
#include "SN2CharacterPart.h"
#include "SN2CharacterPartEntry.h"
#include "Templates/SubclassOf.h"
#include "SN2PlayerCharacter.generated.h"

class AActor;
class APlayerState;
class ASN2PlayerController;
class ASN2PlayerState;
class ASN2SubmarineOxygenator;
class AUWESculpturalBaseActor;
class AUWESubmarine;
class UAnimInstance;
class UCameraComponent;
class UCommonActivatableWidget;
class UGameplayEffect;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class USN2BioreactorInteractionComponent;
class USN2GameConfigSettingsApplier;
class USN2OutOfBoundsCheckComponent;
class USN2PlayerArchetypeComponent;
class USN2ProcessorStationInteractionComponent;
class USN2RefineryRouterComponent;
class USN2RespawnComponent;
class USN2ReviveableComponent;
class USkeletalMeshComponent;
class UTexture2D;
class UUWEAbilitySystemComponent;
class UUWEAbilitySystemTagChangeAnalytics;
class UUWEAlertSpeakerComponent;
class UUWEBiomodCrafterInteractionComponent;
class UUWECharacterMovementComponent;
class UUWECraftingComponent;
class UUWEDamageTracker;
class UUWEEquipmentComponent;
class UUWEFirstPersonCamera;
class UUWEGameplayCueDataHarvester;
class UUWEHealthSetComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEInventoryRouterComponent;
class UUWEItemType;
class UUWEMechanicalSetComponent;
class UUWEMovementSetComponent;
class UUWEOverlapExpellerComponent;
class UUWEPawnAttachmentOwner;
class UUWEPhysicalSetComponent;
class UUWEScubaMaskComponent;
class UUWEStoryGoal;
class UUWESurvivalSetComponent;
class UUWETemperatureRegionTracker;
class UUWEToolbarComponent;
class UVolumeTrackerComponent;

UCLASS(DefaultConfig, Config=Engine)
class SUBNAUTICA2_API ASN2PlayerCharacter : public ASN2BaseCharacter, public IUWEPlayerCustomizationTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnstuck);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRespawned);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDetach);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlackoutDiedDelegate);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ExitWaterCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Neck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Feet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Hair;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<EMovementMode> CurrentMovementMode;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEEquipmentComponent* EquippedItemsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEToolbarComponent* ToolbarComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryRouterComponent* InventoryRouterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAlertSpeakerComponent* AlertSpeakerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UCommonActivatableWidget> HUDClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEScubaMaskComponent* ScubaMaskSections;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2OutOfBoundsCheckComponent* OutOfBoundsCheckComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEDamageTracker* DamageTracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2RespawnComponent* RespawnComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> StartupAttributes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> FastSwimCheatGE;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> RespawnAttributes;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> RespawnPlayerStoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEOverlapExpellerComponent* OverlapExpellerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBlackoutDiedDelegate OnBlackoutDied;
    
    UPROPERTY(BlueprintAssignable)
    FAbilitySystemReady OnAbilitySystemReady;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2ReviveableComponent* ReviveableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2PlayerArchetypeComponent* PlayerArchetypeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EUWEPlayerCustomizationPartType, FGameplayTag> CustomizationTags;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator CameraBaseAimRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSpeedForFootstepSounds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DisallowOnlyAllowAutonomousTickPoseForListenServer;
    
    UPROPERTY(BlueprintAssignable)
    FOnRespawned OnRespawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnstuck OnUnstuck;
    
    UPROPERTY(BlueprintAssignable)
    FOnDetach OnDetach;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMechanicalSetComponent* MechanicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESurvivalSetComponent* SurvivalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPhysicalSetComponent* PhysicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEBiomodCrafterInteractionComponent* BiomodCrafterInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2ProcessorStationInteractionComponent* ProcessorStationInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2BioreactorInteractionComponent* BioreactorInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemTagChangeAnalytics* TagChangeAnalytics;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwnerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEGameplayCueDataHarvester* GameplayCueDataHarvester;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2GameConfigSettingsApplier* GameConfigSettingsApplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UAnimInstance> SwimAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UAnimInstance> WalkAnimation;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SN2PlayerInventoryUpgradeIncrement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CloseToGroundThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsCloseToGround;
    
protected:
    UPROPERTY(Replicated)
    uint16 UWERemoteViewYaw;
    
    UPROPERTY(Replicated)
    uint16 UWERemoteViewPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* OutlineMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicOutlineMaterial;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEFirstPersonCamera* CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEPlayerCameraManagerSettings DefaultPlayerCameraManagerConfig;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTrackerHead;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTrackerFeet;
    
    UPROPERTY(Instanced)
    USN2RefineryRouterComponent* RefineryRouterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWETemperatureRegionTracker* TemperatureTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CraftingInventorySearchRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecentlySubmergedTagDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InBaseGracePeriod;
    
    UPROPERTY()
    FGameplayTagContainer FirstTimeEquippedItems;
    
    UPROPERTY()
    TArray<FSN2CharacterPartEntry> CharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadVolumeTrackerOffsetZ;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<ASN2SubmarineOxygenator> CurrentOxygenator;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool bHasCompletedLifepodRide;
    
private:
    UPROPERTY(Config)
    int32 SN2BasePlayerInventorySlots;
    
public:
    UPROPERTY(BlueprintReadOnly, Config)
    bool AllowDroppingItemsInBases;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool AllowDroppingItemsInSubmarine;
    
private:
    UPROPERTY(Config)
    int32 SN2Depth_Shallow;
    
    UPROPERTY(Config)
    int32 SN2Depth_Intermediate;
    
    UPROPERTY(Config)
    int32 SN2Depth_Deep;
    
    UPROPERTY(Config)
    int32 SN2Depth_VeryDeep;
    
    UPROPERTY(Config)
    int32 SN2Depth_Extreme;
    
    UPROPERTY(Config)
    int32 SN2Depth_Abyssal;
    
    UPROPERTY(Config)
    int32 SN2Depth_Hadal;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TSoftClassPtr<AActor> CarryableActorClass;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FGuid CarryableSaveGuid;
    
    UPROPERTY()
    AActor* PendingCarryableActor;
    
    UPROPERTY(EditAnywhere, Transient)
    FUWEPlayerCustomizationSet OldCustomizationSet;
    
public:
    ASN2PlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void UpdateScubaMaskVisibility() const;
    
public:
    UFUNCTION()
    void UpdateRotationSpeedMultiplier();
    
private:
    UFUNCTION()
    void UpdatePlayerVisibility();
    
public:
    UFUNCTION()
    void UpdateMaxSpeed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBlueprintMeshVisibility(bool ShouldBeHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Unstuck();
    
    UFUNCTION()
    bool TryTeleportToPlayerStart();
    
private:
    UFUNCTION()
    bool TryTeleportToBiobed();
    
public:
    UFUNCTION(BlueprintCallable)
    void StoreCarryable(AActor* Actor);
    
private:
    UFUNCTION()
    void StartCraftingSourcesAsyncUpdateLoop();
    
public:
    UFUNCTION()
    void SetPlayerDefaults();
    
protected:
    UFUNCTION()
    void SetPlayerCharacterSavedData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLifepodRideCompleted();
    
protected:
    UFUNCTION(Server, Unreliable)
    void Server_SyncBaseAimRotation(uint16 Yaw, uint16 Pitch);
    
    UFUNCTION(Reliable, Server)
    void Server_InitiateDetachment(bool FastForward);
    
public:
    UFUNCTION(BlueprintCallable)
    void Respawn(TArray<UUWEItemType*> LostItems);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCharacterPart(const FSN2CharacterPart& PartToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllCharacterParts();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerStateSet(APlayerState* NewPlayerState);
    
    UFUNCTION()
    void OnInteractWithOtherInventory(UUWEInventoryComponent* OtherInventory, UUWEInventoryInteractionComponent* InventoryInteraction);
    
protected:
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable)
    void InitiateDetachment(bool FastForward);
    
    UFUNCTION(BlueprintCallable)
    void HolsterCurrentToolImmediate();
    
    UFUNCTION(BlueprintPure)
    UVolumeTrackerComponent* GetVolumeTracker() const;
    
    UFUNCTION(BlueprintPure)
    AUWESubmarine* GetSubmarinePlayerIsIn() const;
    
    UFUNCTION(BlueprintPure)
    UUWECharacterMovementComponent* GetSN2Movement() const;
    
    UFUNCTION(BlueprintPure)
    ASN2PlayerState* GetPS() const;
    
    UFUNCTION(BlueprintPure)
    ASN2PlayerController* GetPC() const;
    
    UFUNCTION(BlueprintPure)
    ASN2SubmarineOxygenator* GetOxygenator();
    
    UFUNCTION(BlueprintPure)
    FRotator GetLocalBaseAimRotationNormalized() const;
    
    UFUNCTION(BlueprintCallable)
    UUWEInventoryComponent* GetInventory();
    
    UFUNCTION(BlueprintCallable)
    float GetDepthMetersSanitized();
    
    UFUNCTION(BlueprintCallable)
    float GetDepthInOcean();
    
    UFUNCTION(BlueprintCallable)
    float GetDepthInCurrentVolume();
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetCosmeticTagsForPart(EUWEPlayerCustomizationPartType PartType) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetCosmeticTags() const;
    
    UFUNCTION(BlueprintPure)
    AUWESculpturalBaseActor* GetBasePlayerIsIn(int32& StructureId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseInventorySlotCount();
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseAimRotationNormalized();
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetActorWorldRotationNormalized() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipLastToolImmediate();
    
    UFUNCTION(BlueprintCallable)
    void EquipLastTool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AnimVisualLog(const FString& Message) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddCharacterPart(const FSN2CharacterPart& NewPart);
    

    // Fix for true pure virtual functions not being implemented
};

