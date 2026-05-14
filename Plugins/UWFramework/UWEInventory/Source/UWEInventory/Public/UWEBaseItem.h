#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEInventoryItemInterface.h"
#include "UWEWorldPopResourceInterface.h"
#include "OnPostPickupItemDelegate.h"
#include "UWEBaseItem.generated.h"

class UMeshComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UUWEChaosPhysicsController;
class UUWEItemType;
class UVolumeTrackerComponent;

UCLASS(Config=Engine)
class UWEINVENTORY_API AUWEBaseItem : public AActor, public IUWEInventoryItemInterface, public IUWEWorldPopResourceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnequipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSetLifeSpan);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHolstering);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHolstered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDropped);
    
    UPROPERTY(BlueprintAssignable)
    FOnUnequipped OnUnequippedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipped OnEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDropped OnDroppedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHolstered OnHolsteredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHolstering OnHolsteringDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetLifeSpan OnSetLifeSpanDelegate;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEChaosPhysicsController* PhysicsController;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTrackerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnPostPickupItem OnPostPickupItem;
    
    UPROPERTY(Config)
    float UWEItemMaxAutoPickupTime;
    
    UPROPERTY(Config)
    float UWEItemMagnetismInterpSpeed;
    
    UPROPERTY(Config)
    float UWEItemMagnetismDistance;
    
    UPROPERTY(BlueprintReadWrite)
    float MagnetismMinDistance;
    
    UPROPERTY(Config)
    float UWEItemMagnetismRemoteClientDelay;
    
    UPROPERTY(BlueprintReadWrite)
    bool PickupDisabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool AutoPickupDisabled;
    
    UPROPERTY(BlueprintReadOnly)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bHasBeenPickedUp: 1;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> EquippedByActor;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ItemPickupCooldown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ReplicatedSimlatePhysics)
    bool bReplicatedSimulatePhysics;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ReplicatedCollisionEnabled)
    bool bReplicatedCollisionEnabled;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> MagnetActor;
    
public:
    AUWEBaseItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ThrowForward(AActor* ThrowingActor, FVector Direction, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void StopSimulateMagnetism();
    
    UFUNCTION(BlueprintCallable)
    void SimulateMagnetism(AActor* ToActor);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedSimulatePhysics(bool bNewSimulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedCollisionEnabled(bool bNewCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDropped();
    
protected:
    UFUNCTION()
    void OnRep_ReplicatedSimlatePhysics();
    
    UFUNCTION()
    void OnRep_ReplicatedCollisionEnabled();
    
    UFUNCTION()
    void OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetPhysicsEnabled(bool Enabled, bool ForceToSleep);
    
    // FIXME:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetCollisionResponse(ECollisionChannel Channel, ECollisionResponse NewResponse);
    
    UFUNCTION(BlueprintPure)
    bool IsOwned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquippedByLocalPawn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMagnet() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetEquippedMesh();
    
    UFUNCTION(BlueprintPure)
    FGameplayCueParameters GetDefaultCueParams();
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetCharacterMesh() const;
    
    UFUNCTION(BlueprintPure)
    static USceneComponent* GetAttachTarget(const AActor* Actor);
    
    UFUNCTION()
    void ExecuteItemGameplayCue_NonReplicated(FGameplayTag Tag);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPOnUnequipped(const AActor* OldEquippedByActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPOnHolstered(const AActor* OldEquippedByActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPOnEquipVisibilityChanged(bool bNewVisible);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPOnEquipped(bool bFirstEquip);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAwayRandom(const AActor* FromActor, const float SpawnImpulse);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAway(const AActor* FromActor, const float SpawnImpulse);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(const FVector& Impulse, bool Normalized);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value);
    

    // Fix for true pure virtual functions not being implemented
};

