#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DraggedItemViewModel.generated.h"

class USN2CharacterSlotItemViewModel;
class USN2InventoryItemViewModel;
class USN2InventoryViewModel;
class USN2QuickSlotEntryViewModel;
class UTexture2D;
class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2DraggedItemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    USN2InventoryItemViewModel* InventoryItemViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    USN2QuickSlotEntryViewModel* QuickSlotItemViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    USN2CharacterSlotItemViewModel* CharacterSlotItemViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
public:
    USN2DraggedItemViewModel();

    UFUNCTION(BlueprintCallable)
    void SetItemType(UUWEItemType* InItemType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromQuickSlot(USN2QuickSlotEntryViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromInventory(USN2InventoryItemViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromCharacterSlot(USN2CharacterSlotItemViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void DropInQuickSlot(USN2QuickSlotEntryViewModel* QuickSlotEntryViewModel);
    
    UFUNCTION(BlueprintCallable)
    void DropInInventory(USN2InventoryViewModel* InventoryViewModel);
    
    UFUNCTION(BlueprintCallable)
    void DropInCharacterSlot();
    
};

