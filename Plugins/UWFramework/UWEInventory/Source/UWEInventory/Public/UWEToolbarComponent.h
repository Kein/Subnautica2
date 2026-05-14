#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "UWEInventoryItemId.h"
#include "UWEToolbarItem.h"
#include "UWEToolbarComponent.generated.h"

class AActor;
class AUWEBaseItem;
class UUWEInventoryComponent;
class UUWEItemType;
class UUWESaveHandle;

UCLASS(BlueprintType, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEToolbarComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToolbarChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHolsterEnd, int32, SlotNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHolsterBegin, int32, SlotNumber);
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_NumSlots)
    int32 NumSlots;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_Enabled)
    bool bEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FOnToolbarChanged OnToolbarChanged;
    
protected:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool bEquippingAllowed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_ToolbarItems)
    TArray<FUWEToolbarItem> ToolbarItems;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_Holstering)
    bool bHolstering;
    
    UPROPERTY(BlueprintAssignable)
    FOnHolsterBegin OnHolsterBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnHolsterEnd OnHolsterEnd;
    
private:
    UPROPERTY()
    FTimerHandle RefreshTimerHandle;
    
    UPROPERTY()
    FTimerHandle DelayedAddItemHandle;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Config)
    int32 UWEBaseNumToolbarSlots;
    
    UPROPERTY(ReplicatedUsing=OnRep_DesiredTool)
    TWeakObjectPtr<AActor> DesiredTool;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> ClientDesiredTool;
    
    UPROPERTY(Instanced)
    UUWEInventoryComponent* TargetInventoryAfterHolstering;
    
public:
    UUWEToolbarComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnEquipEquippedTool();
    
    UFUNCTION(BlueprintCallable)
    void SetNumSlots(int32 NewNumSlots);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippingAllowed(bool bInEquippingAllowed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetEnabled(bool bInEnabled);
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerSwitchToSlot(int32 NewSlotNumber);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwapSlots(int32 FromIndex, int32 ToIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveFromSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMoveFromSlotToInventory(int32 SlotNumber, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDropFromToolbarSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDestroyToolbarSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    FUWEToolbarItem ServerAddToolbarItemFromInventory(FUWEInventoryItemId ItemId, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void RefreshToolbar();
    
private:
    UFUNCTION()
    void OnToolChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped);
    
    UFUNCTION()
    void OnRep_ToolbarItems();
    
    UFUNCTION()
    void OnRep_NumSlots();
    
    UFUNCTION()
    void OnRep_Holstering();
    
    UFUNCTION()
    void OnRep_Enabled();
    
    UFUNCTION()
    void OnRep_DesiredTool();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveFromSlotToInventory(int32 SlotNumber, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintPure)
    bool IsToolbarItemType(UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintPure)
    bool IsSlotEquipped(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    bool IsHolstering() const;
    
private:
    UFUNCTION()
    void InternalRemoveFromSlot(int32 SlotNumber, UUWEInventoryComponent* InInventory);
    
    UFUNCTION()
    void InternalMoveFromSlotToTargetInventory(int32 SlotNumber);
    
public:
    UFUNCTION(Reliable, Server)
    void InteractWithItemInSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void HolsterCurrentSlot();
    
    UFUNCTION(BlueprintPure)
    bool HasSlotEquipped(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    bool HasItemInSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    bool HasFreeSlots();
    
    UFUNCTION(BlueprintPure)
    bool HasEnergyForSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEToolbarItem> GetToolbarItemsForType(const UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintPure)
    FUWEToolbarItem GetSlotToolbarItem(int32 SlotNumber);
    
private:
    UFUNCTION()
    UUWEInventoryComponent* GetInventory() const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetEquippedSlot();
    
    UFUNCTION(BlueprintPure)
    float GetEnergyPercentForSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    int32 GetDesiredSlot();
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActorSlot(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorInSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveActorSlot();
    
private:
    UFUNCTION(BlueprintPure)
    int32 FindSlotForItem(int32 SlotNumber);
    
public:
    UFUNCTION(BlueprintCallable)
    void EquipNextTool(bool bRight);
    
    UFUNCTION(BlueprintCallable)
    void EquipFromSlot(int32 SlotNumber);
    
protected:
    UFUNCTION()
    AActor* DropFromToolbarSlotInternal(int32 SlotNumber, bool bIgnoreTagRequirements);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropEquippedTool();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DestroyAllItems();
    
    UFUNCTION(BlueprintPure)
    bool CanAddInventoryItem(FUWEInventoryItemId ItemId, FGameplayTag& Reason, int32 SlotNumber, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastToolbarChanged();
    
    UFUNCTION(BlueprintCallable)
    void AddToolbarItemTypeFromInventory(UUWEItemType* ItemType, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddToolbarItemFromInventory(FUWEInventoryItemId ItemId, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory);
    

    // Fix for true pure virtual functions not being implemented
};

