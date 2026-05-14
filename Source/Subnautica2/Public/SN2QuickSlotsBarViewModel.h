#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2QuickSlotsBarViewModel.generated.h"

class AActor;
class APawn;
class UObject;
class USN2QuickSlotEntryViewModel;

UCLASS()
class SUBNAUTICA2_API USN2QuickSlotsBarViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2QuickSlotEntryViewModel*> Slots;
    
protected:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasReasonToHide;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowReload;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowNoBatteries;
    
    UPROPERTY(BlueprintReadWrite)
    bool SelectQuickslotModeActive;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SelectedQuickslot;
    
public:
    USN2QuickSlotsBarViewModel();

    UFUNCTION(BlueprintCallable)
    void TrySelectFirstFreeQuickslot();
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousQuickslot();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextQuickslot();
    
    UFUNCTION(BlueprintCallable)
    void RemoveReasonToHide(const FString& Reason);
    
protected:
    UFUNCTION()
    void OnQuickSlotChanged();
    
    UFUNCTION()
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION()
    void OnEnergyChanged(AActor* Who);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSelectedQuickslot();
    
    UFUNCTION(BlueprintCallable)
    void ClearQuickslotSelection();
    
    UFUNCTION(BlueprintCallable)
    void AddReasonToHide(const FString& Reason);
    
};

