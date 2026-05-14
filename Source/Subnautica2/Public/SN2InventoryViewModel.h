#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEInventoryItem.h"
#include "UWEInventoryItemId.h"
#include "SN2InventoryViewModel.generated.h"

class USN2InventoryItemViewModel;
class UUWEEquipmentComponent;
class UUWEInventoryComponent;
class UUWEToolbarComponent;

UCLASS()
class SUBNAUTICA2_API USN2InventoryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEInventoryComponent* OtherInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEEquipmentComponent* EquippedItemsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEToolbarComponent* ToolbarComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FUWEInventoryItemId, USN2InventoryItemViewModel*> StacksByGuid;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2InventoryItemViewModel*> ItemViewModels;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2InventoryItemViewModel*> StacksAdded;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2InventoryItemViewModel*> StacksRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    FText InventoryName;
    
    UPROPERTY(BlueprintReadOnly)
    FText InventoryDescription;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasValidItems;
    
    UPROPERTY(BlueprintReadOnly)
    int32 InventorySize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Columns;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowedToDrop;
    
public:
    USN2InventoryViewModel();

    UFUNCTION(BlueprintCallable)
    void SetAllowedToDrop(bool bInAllowedToDrop);
    
protected:
    UFUNCTION()
    void OnItemRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnItemAdded(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnInventoryChanged();
    
public:
    UFUNCTION(BlueprintPure)
    FText GetInventoryName() const;
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void ClearStacksRemoved();
    
    UFUNCTION(BlueprintCallable)
    void ClearStacksAdded();
    
};

