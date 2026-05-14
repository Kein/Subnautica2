#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2EquippedItemsViewModel.generated.h"

class USN2CharacterSlotItemViewModel;
class UUWEEquipmentComponent;

UCLASS()
class SUBNAUTICA2_API USN2EquippedItemsViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWEEquipmentComponent* EquippedItems;
    
public:
    USN2EquippedItemsViewModel();

    UFUNCTION(BlueprintPure)
    bool Refresh() const;
    
protected:
    UFUNCTION()
    void OnEquippedItemsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    USN2CharacterSlotItemViewModel* GetViewModelForSlot(FGameplayTag SlotTag);
    
};

