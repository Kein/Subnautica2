#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEInventoryItem.h"
#include "SN2InventoryScreenViewModel.generated.h"

class USN2EquippedItemsViewModel;
class USN2InventoryViewModel;
class UUWEEquipmentComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEItemType;
class UUWEToolbarComponent;

UCLASS()
class SUBNAUTICA2_API USN2InventoryScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly)
    bool OtherInventoryBecameInvalid;
    
protected:
    UPROPERTY(Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(Instanced)
    UUWEInventoryComponent* OtherInventoryComponent;
    
    UPROPERTY(Instanced)
    UUWEInventoryInteractionComponent* OtherInventoryInteraction;
    
    UPROPERTY(Instanced)
    UUWEEquipmentComponent* EquippedItemsComponent;
    
    UPROPERTY(Instanced)
    UUWEToolbarComponent* ToolbarComponent;
    
    UPROPERTY()
    USN2InventoryViewModel* Inventory;
    
    UPROPERTY()
    USN2InventoryViewModel* OtherInventory;
    
    UPROPERTY()
    USN2EquippedItemsViewModel* EquippedItems;
    
public:
    USN2InventoryScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void SetQuickSlot(int32 SlotIndex, UUWEItemType* ItemType, const FUWEInventoryItem InventoryItem);
    
protected:
    UFUNCTION()
    void OnOtherInventoryInteractionEnabledChanged(bool bInteractionEnabled);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasOtherInventory() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEquippedItems() const;
    
    UFUNCTION(BlueprintPure)
    USN2InventoryViewModel* GetOtherInventory();
    
    UFUNCTION(BlueprintPure)
    USN2InventoryViewModel* GetInventory();
    
    UFUNCTION(BlueprintPure)
    USN2EquippedItemsViewModel* GetEquippedItems();
    
};

