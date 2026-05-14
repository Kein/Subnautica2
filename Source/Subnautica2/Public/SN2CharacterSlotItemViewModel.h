#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2CharacterSlotItemViewModel.generated.h"

class AUWEBaseItem;
class UTexture2D;
class UUWEEquipmentComponent;
class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2CharacterSlotItemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadOnly)
    FName SlotName;
    
    UPROPERTY()
    AUWEBaseItem* EquippedItem;
    
protected:
    UPROPERTY(Instanced)
    UUWEEquipmentComponent* EquippedItemsComponent;
    
public:
    USN2CharacterSlotItemViewModel();

    UFUNCTION(BlueprintCallable)
    void MoveToInventory();
    
    UFUNCTION(BlueprintPure)
    bool IsTool() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetThumbnail() const;
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetItemType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetEquippedItemName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    bool CanItemGoInQuickSlot() const;
    
};

