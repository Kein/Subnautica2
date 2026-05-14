#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEInventoryItem.h"
#include "UWEInventoryItemId.h"
#include "UWEInventoryStorageContainer.h"
#include "UWEInventorySubsystem.generated.h"

class AActor;
class AUWEInventoryStorage;
class UUWEItemType;
class UUWESaveHandle;

UCLASS(BlueprintType, Config=Game)
class UWEINVENTORY_API UUWEInventorySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemRemovedFromInventory, const int32&, InventoryId, const FUWEInventoryItem&, InventoryItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAttributeChanged, const int32&, InventoryId, const FUWEInventoryItem&, InventoryItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAddedToInventory, const int32&, InventoryId, const FUWEInventoryItem&, InventoryItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryUpdated, const int32&, InventoryId);
    
    UPROPERTY(BlueprintAssignable)
    FOnItemAddedToInventory OnItemAddedToInventory;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemRemovedFromInventory OnItemRemovedFromInventory;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemAttributeChanged OnItemAttributeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryUpdated OnInventoryUpdated;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Config)
    int32 NumInventoriesPerStorageActor;
    
private:
    UPROPERTY(SaveGame)
    TSet<FGuid> StorageActorSaveIds;
    
    UPROPERTY()
    int32 HighestInventoryId;
    
    UPROPERTY()
    TMap<int32, TWeakObjectPtr<AUWEInventoryStorage>> StorageActors;
    
public:
    UUWEInventorySubsystem();

    UFUNCTION(BlueprintCallable)
    bool ServerAddItemTypeToInventory(const int32& InventoryId, UUWEItemType* ItemType, int32 Count);
    
    UFUNCTION(BlueprintPure)
    void RemoveItemByType(const int32& InventoryId, UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(const int32& InventoryId, const FUWEInventoryItemId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItemsForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems(const int32& InventoryId);
    
    UFUNCTION()
    void RefreshStorageActors();
    
    UFUNCTION()
    void OnStorageActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnSavePerformed();
    
    UFUNCTION(BlueprintPure)
    int32 NumItems(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    bool MoveInventoryItem(const FUWEInventoryItemId& ItemId, const int32& FromInventoryId, const int32& ToInventoryId);
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryValid(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryFull(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryCommunal(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyOfItemType(const int32& InventoryId, UUWEItemType* ItemType);
    
    UFUNCTION()
    FUWEInventoryStorageContainer GetStorageContainerForInventory(const int32& InventoryId);
    
    UFUNCTION()
    TMap<int32, TWeakObjectPtr<AUWEInventoryStorage>> GetStorageActors();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxItemsForInventory(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItemsForInventory(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetItemsByItemType(const int32& InventoryId, UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItemId> GetItemIdsByItemType(const int32& InventoryId, const UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintPure)
    FUWEInventoryItem GetItem(const int32& InventoryId, const FUWEInventoryItemId& ItemId);
    
    UFUNCTION()
    TSubclassOf<AActor> GetActorClassForInventory(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    AUWEInventoryStorage* FindStorageActorForInventory(const int32& InventoryId);
    
    UFUNCTION(BlueprintPure)
    bool CanAddItemToInventory(const int32& InventoryId, const FUWEInventoryItem& Item, FGameplayTag& Reason, bool bCanOverflow);
    
    UFUNCTION(BlueprintCallable)
    void AddItemTypeToInventory(const int32& InventoryId, UUWEItemType* ItemType, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    FUWEInventoryItemId AddInventoryItem(const int32& InventoryId, const FUWEInventoryItem& Item);
    
};

