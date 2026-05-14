#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "ConsumableInfo.h"
#include "SN2QuickSlotEntryViewModel.generated.h"

class UObject;
class USN2QuickSlotEntryViewModel;
class UTexture2D;
class UUWEInventoryComponent;
class UUWEItemType;
class UUWEToolbarComponent;

UCLASS()
class SUBNAUTICA2_API USN2QuickSlotEntryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveFromToolbar, int32, RemoveSlotNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReload);
    
    UPROPERTY(BlueprintAssignable)
    FOnRemoveFromToolbar OnRemoveFromToolbar;
    
    UPROPERTY(BlueprintAssignable)
    FOnReload OnReload;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEToolbarComponent* ToolbarComponent;
    
    UPROPERTY(BlueprintReadOnly)
    UUWEItemType* ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPublished;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsSelected;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasStatus;
    
    UPROPERTY(BlueprintReadOnly)
    float StatusPercent;
    
    UPROPERTY(BlueprintReadOnly)
    FText ToolName;
    
    UPROPERTY(BlueprintReadOnly)
    FText ToolDescription;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SlotNumber;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEnergyTool;
    
    UPROPERTY(BlueprintReadWrite)
    FText PrimaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText SecondaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText TertiaryActionDescription;
    
public:
    USN2QuickSlotEntryViewModel();

    UFUNCTION(BlueprintCallable)
    void SwapSlots(USN2QuickSlotEntryViewModel* TargetSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetTertiaryActionDescription(FText Desc);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryActionDescription(FText Desc);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionDescription(FText Desc);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromToolbar(int32 RemoveSlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION()
    void OnEnergyChanged(float PercentEnergy);
    
    UFUNCTION(BlueprintCallable)
    void MoveFromToolbarToInventory(UUWEInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintPure)
    bool IsItemConsumable() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FText> GetLocalPlayerActiveWarnings(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FConsumableInfo> GetConsumableInfo() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DropSlot(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ClearSlot(UObject* WorldContextObject);
    
};

