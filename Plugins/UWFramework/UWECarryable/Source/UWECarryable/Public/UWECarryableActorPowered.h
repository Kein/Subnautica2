#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "UWECarryableActorInterface.h"
#include "UWEInventoryItem.h"
#include "UWESaveCallbacks.h"
#include "OnDeflateDelegate.h"
#include "OnInflateDelegate.h"
#include "UWECarryableActorPowered.generated.h"

class UPrimitiveComponent;
class UUWEAbilitySystemComponent;
class UUWEAssetDataComponent;
class UUWECarryableRootComponent;
class UUWEChaosPhysicsController;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEItemType;
class UUWEMechanicalSetComponent;
class UUWERestoreRotationComponent;
class UUWESaveComponent;
class UVolumeTrackerComponent;

UCLASS()
class UWECARRYABLE_API AUWECarryableActorPowered : public AActor, public IAbilitySystemInterface, public IUWESaveCallbacks, public IUWECarryableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECarryableRootComponent* CarryableRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMechanicalSetComponent* MechanicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* PowerInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* PowerInventoryInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEChaosPhysicsController* PhysicsControllerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWERestoreRotationComponent* RestoreRotationComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UVolumeTrackerComponent* VolumeTrackerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAssetDataComponent* AssetDataComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag PowerSourceTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEItemType> PowerSourceItemType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnInflate OnInflate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDeflate OnDeflate;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ReplicatedSimlatePhysics)
    bool bReplicatedSimulatePhysics;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ReplicatedCollisionEnabled)
    bool bReplicatedCollisionEnabled;
    
public:
    AUWECarryableActorPowered(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEnergy();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetReplicatedSimulatePhysics(bool bNewSimulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedCollisionEnabled(bool bNewCollisionEnabled);
    
protected:
    UFUNCTION()
    void OnRootAttachmentChanged();
    
    UFUNCTION()
    void OnRep_ReplicatedSimlatePhysics();
    
    UFUNCTION()
    void OnRep_ReplicatedCollisionEnabled();
    
private:
    UFUNCTION()
    void OnPowerSourceRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnPowerSourceAdded(const FUWEInventoryItem& InventoryItem);
    
protected:
    UFUNCTION()
    void OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION()
    void OnEnergyRefilled(AActor* Who);
    
    UFUNCTION()
    void OnEnergyEmpty(AActor* Who);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetPhysicsEnabled(bool Enabled, bool ForceToSleep);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetCollisionResponse(ECollisionChannel Channel, ECollisionResponse NewResponse);
    
    UFUNCTION(BlueprintPure)
    bool GetIsPowered() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }

};

