#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "UWEActorLifeCycle.h"
#include "UWEMovementModifier.h"
#include "UWEInventoryItem.h"
#include "UWEChargeableVehicle.h"
#include "EUWEVehicleMovementType.h"
#include "EChassisAttachmentProhibitedReason.h"
#include "SN2Submersible.h"
#include "Templates/SubclassOf.h"
#include "SN2Tadpole.generated.h"

class AActor;
class USN2CollisionDamageComponent;
class USN2TadpoleInventoryRouterComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEItemType;
class UUWELocalVelocitySampler;

UCLASS(Config=Engine)
class SUBNAUTICA2_API ASN2Tadpole : public ASN2Submersible, public IUWEMovementModifier, public IUWEChargeableVehicle, public IUWEActorLifeCycle {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTadpoleMovementTypeChanged, EUWEVehicleMovementType, NewMovementType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChassisDelegate, AActor*, Chassis);
    
    UPROPERTY(Config, EditDefaultsOnly)
    float DefaultBankingModifier;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float DefaultStrafeSpeedModifier;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float DefaultSwimmingFriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEItemType> PowerCellItemType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWELocalVelocitySampler* LeftExhaust;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWELocalVelocitySampler* RightExhaust;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWELocalVelocitySampler* BottomExhaust;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWELocalVelocitySampler* RearExhaust;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2CollisionDamageComponent* CollisionDamageComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> SignalActorClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2TadpoleInventoryRouterComponent* InventoryRouterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* PowerInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* UpgradeInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* PowerInventoryInteraction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* UpgradeInventoryInteraction;
    
    UPROPERTY(BlueprintAssignable)
    FChassisDelegate OnChassisOverlapBegin;
    
    UPROPERTY(BlueprintAssignable)
    FChassisDelegate OnChassisOverlapEnd;
    
    UPROPERTY(BlueprintAssignable)
    FChassisDelegate OnChassisAttach;
    
    UPROPERTY(BlueprintAssignable)
    FChassisDelegate OnChassisDetach;
    
    UPROPERTY(BlueprintAssignable)
    FChassisDelegate OnChassisFullyAttached;
    
    UPROPERTY(BlueprintAssignable)
    FTadpoleMovementTypeChanged OnMovementTypeChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentChassis)
    AActor* CurrentChassis;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TSoftClassPtr<AActor> CurrentChassisClass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGuid ChassisSaveGuid;
    
    UPROPERTY(EditDefaultsOnly)
    float ChassisDepenetrationAcceleration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_MovementType)
    EUWEVehicleMovementType MovementType;
    
private:
    UPROPERTY()
    AActor* SignalActor;
    
    UPROPERTY()
    AActor* OverlappingChassis;
    
    UPROPERTY()
    FTimerHandle DetachTimerHandle;
    
    UPROPERTY()
    AActor* AttachChassisAtBeginPlay;
    
public:
    ASN2Tadpole(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UpdateEnergy();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSignalActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetMovemenType(EUWEVehicleMovementType InMovementType);
    
private:
    UFUNCTION()
    void OnUpgradeRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnUpgradeAdded(const FUWEInventoryItem& InventoryItem);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSignalCreated(AActor* InSignalActor);
    
private:
    UFUNCTION()
    void OnRep_MovementType(EUWEVehicleMovementType OldMovementType);
    
protected:
    UFUNCTION()
    void OnRep_CurrentChassis(AActor* OldChassis);
    
private:
    UFUNCTION()
    void OnPowerCellRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnPowerCellAdded(const FUWEInventoryItem& InventoryItem);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChassisAttachmentProhibited(EChassisAttachmentProhibitedReason Reason);
    
    UFUNCTION(BlueprintPure)
    EUWEVehicleMovementType GetMovementType() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentChassis() const;
    
    UFUNCTION(BlueprintPure)
    float GetBankingModifier() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachCurrentChassis();
    
    UFUNCTION(BlueprintCallable)
    void AttachChassis(AActor* InChassis);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInputRotator(const FRotator& InRotator);
    

    // Fix for true pure virtual functions not being implemented
};

