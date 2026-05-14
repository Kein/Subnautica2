#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEActorLifeCycle.h"
#include "UWEItemPickup.h"
#include "UWESaveObject.h"
#include "OnInteractWithOtherInventoryDelegate.h"
#include "OnInventoryChangedDelegate.h"
#include "OnInventoryIDAssignedDelegate.h"
#include "OnItemAddedDelegate.h"
#include "OnItemAttributeChangedDelegate.h"
#include "OnItemRemovedDelegate.h"
#include "UWEInventoryItem.h"
#include "UWEInventoryItemId.h"
#include "UWEInventoryComponent.generated.h"

class AActor;
class UInputAction;
class UUWEInventoryComponent;
class UUWEInventorySubsystem;
class UUWEItemType;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEInventoryComponent : public UActorComponent, public IUWESaveObject, public IUWEItemPickup, public IUWEActorLifeCycle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bDespawned;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer AllowedTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, SaveGame)
    int32 InventoryId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, SaveGame)
    bool AllowAddingAnyItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MaxItems)
    int32 MaxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInventoryCanOverflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InventoryDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCommunal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisplayAsSorted;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractWithOtherInventory OnInteractWithOtherInventory;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractWithOtherInventory OnInteractEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemAdded OnItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemRemoved OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemAttributeChanged OnItemAttributeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryIDAssigned OnInventoryIdAssigned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInputAction* UseItemInputAction;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool UsesAFilter() const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetItemAtIndex(int32 Index, FUWEInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxItems(int32 NewMaxItems);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowAddingItems(bool bAllowAddingItems);
    
    UFUNCTION(BlueprintCallable)
    AActor* ServerDropItem(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveItemFromInventory(FUWEInventoryItemId ItemId, int32 FromInventoryId);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemByType(UUWEItemType* ItemType, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveItem(FUWEInventoryItemId ItemId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAll();
    
    UFUNCTION(BlueprintCallable)
    bool PickupItemAndGetID(AActor* ActorToPickup, FUWEInventoryItemId& OutItemID, bool bCanOverflow);
    
    UFUNCTION(BlueprintCallable)
    bool PickupItem(AActor* ActorToPickup, bool bCanOverflow);
    
    UFUNCTION(BlueprintCallable)
    bool PickupAndGetID(AActor* ActorToPickup, FUWEInventoryItemId& OutItemID, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    bool Pickup(AActor* ActorToPickup, bool bNotify);
    
private:
    UFUNCTION()
    void OnRep_MaxItems();
    
public:
    UFUNCTION()
    void OnItemRemovedFromInventory(const int32& InInventoryId, const FUWEInventoryItem& Item);
    
    UFUNCTION()
    void OnItemAddedToInventory(const int32& InInventoryId, const FUWEInventoryItem& Item);
    
    UFUNCTION()
    void OnInventoryUpdated(const int32& InInventoryId);
    
    UFUNCTION()
    void OnInventoryItemAttributeChanged(const int32& InInventoryId, const FUWEInventoryItem& Item);
    
    UFUNCTION(BlueprintPure)
    int32 NumItems() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MoveItemBetweenInventories(FUWEInventoryItemId ItemId, int32 FromInventoryId, int32 ToInventoryId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MoveInventoryItem(UUWEInventoryComponent* ToInventory, FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MoveAllInventoryItems(UUWEInventoryComponent* ToInventory, UUWEInventoryComponent* FromInventory);
    
    UFUNCTION(NetMulticast, Reliable)
    void ItemPickedUpFailedClientNotify(AActor* Actor);
    
    UFUNCTION(NetMulticast, Reliable)
    void ItemPickedUpClientNotify(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool ItemIsFiltered(const UUWEItemType* ItemType) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ItemDroppedMulticastNotify(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool InteractWithInventoryItemIsEnabled(FUWEInventoryItemId ItemId, FText& OutNotInteractableReason, AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InteractWithInventoryItem(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory);
    
    UFUNCTION(BlueprintPure)
    bool HasSpaceForItems(const TArray<FUWEInventoryItem>& Items) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyOfItemType(UUWEItemType* ItemType) const;
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetItemType(FUWEInventoryItemId ItemId) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItemsRaw() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItemsByType(const FGameplayTag Tag, bool bPartial) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItemsByItemType(const UUWEItemType* ItemType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItems() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItemId> GetItemIds() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountByType(UUWEItemType* ItemType) const;
    
    UFUNCTION(BlueprintPure)
    FUWEInventoryItem GetItem(FUWEInventoryItemId ItemId) const;
    
private:
    UFUNCTION()
    UUWEInventorySubsystem* GetInventorySubsystem() const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetIndexOfItem(const FUWEInventoryItem& InventoryItem) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> FindItemsByGameplayTag(const FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropItem(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeleteAllInventoryItems();
    
    UFUNCTION(BlueprintPure)
    bool CanPickupItemTypeWithQuantity(UUWEItemType* ItemType, FGameplayTag& Reason, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    bool CanPickUpActor(AActor* Actor, const FHitResult HitResult, FGameplayTag& Reason);
    
    UFUNCTION(BlueprintPure)
    bool CanDropItem(FUWEInventoryItemId ItemId, FGameplayTag& Reason, const UUWEInventoryComponent* InitiatingInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddItemTypeToInventory(UUWEItemType* ItemType, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddItemByTypeToInventory(int32 InInventoryId, UUWEItemType* ItemType, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAsMuchAsPossibleToInventory(UUWEItemType* ItemType, int32 Quantity);
    

    // Fix for true pure virtual functions not being implemented
};

