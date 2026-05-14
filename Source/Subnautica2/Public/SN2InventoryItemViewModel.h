#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "UWEInventoryItem.h"
#include "ConsumableInfo.h"
#include "SN2InventoryItemViewModel.generated.h"

class UTexture2D;
class UUWEInventoryComponent;
class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2InventoryItemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bAllowedToDrop;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEInventoryComponent* OtherInventory;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsInLocalInventory;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag TypeTag;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBusy;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StackSize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ToolbarNumSlots;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPublished;
    
    UPROPERTY(BlueprintReadOnly)
    bool bFilteredForOtherInventory;
    
    UPROPERTY(BlueprintReadWrite)
    FText PrimaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText SecondaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText TertiaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText QuaternaryActionDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText PrimaryActionWithModifierDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText SecondaryActionWithModifierDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText TertiaryActionWithModifierDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FText QuaternaryActionWithModifierDescription;
    
public:
    USN2InventoryItemViewModel();

    UFUNCTION()
    void SetToolbarNumSlots(int32 NewSize);
    
    UFUNCTION()
    void SetTertiaryActionWithModifierDescription(FText Desc);
    
    UFUNCTION()
    void SetTertiaryActionDescription(FText Desc);
    
    UFUNCTION()
    void SetSecondaryActionWithModifierDescription(FText Desc);
    
    UFUNCTION()
    void SetSecondaryActionDescription(FText Desc);
    
    UFUNCTION()
    void SetQuaternaryActionWithModifierDescription(FText Desc);
    
    UFUNCTION()
    void SetQuaternaryActionDescription(FText Desc);
    
    UFUNCTION()
    void SetPrimaryActionWithModifierDescription(FText Desc);
    
    UFUNCTION()
    void SetPrimaryActionDescription(FText Desc);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToDrop(bool bInAllowedToDrop);
    
protected:
    UFUNCTION()
    void OnItemAttributeChanged(const FUWEInventoryItem& InventoryItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToQuickslot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToOtherInventory(bool MoveAll);
    
    UFUNCTION(BlueprintPure)
    FText MissingInteractionReason() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOwnerPilotingVehicle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemInteractable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemEquippable(bool ExcludeQuickslots) const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemConsumable() const;
    
    UFUNCTION(BlueprintCallable)
    void Interact();
    
    UFUNCTION(BlueprintPure)
    bool HasStatus() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOtherInventory() const;
    
    UFUNCTION(BlueprintPure)
    float GetStatusPercent() const;
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetItemType() const;
    
    UFUNCTION(BlueprintPure)
    FUWEInventoryItem GetInventoryItem();
    
    UFUNCTION(BlueprintPure)
    TArray<FConsumableInfo> GetConsumableInfo() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetActiveWarnings() const;
    
    UFUNCTION(BlueprintCallable)
    void Equip();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintPure)
    bool CanItemGoInQuickSlot() const;
    
};

