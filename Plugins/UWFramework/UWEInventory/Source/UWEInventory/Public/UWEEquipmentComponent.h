#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEEventKey.h"
#include "UWESaveObject.h"
#include "EquipmentSlot.h"
#include "UWEEquippedItem.h"
#include "UWEInventoryItemId.h"
#include "UWEEquipmentComponent.generated.h"

class AActor;
class APlayerState;
class AUWEBaseEquippable;
class AUWEBaseItem;
class USceneComponent;
class UUWEInventoryComponent;
class UUWEItemType;
class UUWESaveHandle;
class UUWEToolbarComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEEquipmentComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnequipToolDelegate, AUWEBaseItem*, Tool);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnToolChangedDelegate, AUWEBaseItem*, OldTool, AUWEBaseItem*, NewTool, bool, bIsFirstTimeEquipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipToolDelegate, AUWEBaseItem*, Tool, bool, bIsFirstTimeEquipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipmentChanged);
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipmentSlot> Slots;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentChanged OnChangedEquipment;
    
    UPROPERTY(BlueprintAssignable)
    FOnToolChangedDelegate OnChangedTools;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipToolDelegate OnEquippingTool;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnequipToolDelegate OnUnequippingTool;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_EquippedItems)
    TArray<AUWEBaseItem*> EquippedItems;
    
private:
    UPROPERTY()
    TArray<AUWEBaseItem*> OldEquippedItems;
    
    UPROPERTY(SaveGame)
    TArray<FPrimaryAssetId> EquipmentToSpawn;
    
    UPROPERTY(SaveGame)
    TArray<FUWEEquippedItem> EquipmentToRespawn;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Transient)
    UUWEItemType* PendingFirstEquipItemType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerState> PlayerState;
    
public:
    UUWEEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnequipAndDestroyAll();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentHidden(bool bHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnloadTool(AUWEBaseEquippable* Tool);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequipTool();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequipToInventory(AUWEBaseItem* Equippable, bool bNotify);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequipAndDrop(AUWEBaseItem* Equippable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequip(AUWEBaseItem* Equippable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReloadTool(AUWEBaseEquippable* Tool, FUWEInventoryItemId ItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEquipFromInventory(FUWEInventoryItemId ItemId, UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEquip(AUWEBaseItem* Equippable);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemByType(UUWEItemType* ItemType);
    
protected:
    UFUNCTION()
    void OnRep_EquippedItems();
    
private:
    UFUNCTION()
    void OnItemDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnEventVerbEquip(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    static bool IsItemTypeTool(UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintPure)
    bool HasItemByType(UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintCallable)
    FName GetSocketName(FGameplayTag SlotTag);
    
private:
    UFUNCTION(BlueprintPure)
    UUWEToolbarComponent* GetOwnerToolbar() const;
    
    UFUNCTION(BlueprintPure)
    UUWEInventoryComponent* GetOwnerInventory();
    
public:
    UFUNCTION(BlueprintPure)
    AUWEBaseItem* GetEquippedTool();
    
    UFUNCTION(BlueprintCallable)
    AUWEBaseItem* GetEquippableInSlot(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetAttachComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquipFromWorld(AUWEBaseItem* Equippable, FGameplayTag& Reason);
    
    UFUNCTION(BlueprintPure)
    bool CanEquipFromInventory(FUWEInventoryItemId ItemId, FGameplayTag& Reason, UUWEInventoryComponent* Inventory);
    

    // Fix for true pure virtual functions not being implemented
};

