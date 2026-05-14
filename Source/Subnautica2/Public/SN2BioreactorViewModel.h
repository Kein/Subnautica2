#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "ESN2BioreactorPowerConsumptionState.h"
#include "SN2BioreactorViewModel.generated.h"

class ASN2Bioreactor;
class USN2BioreactorInteractionComponent;
class USN2InventoryScreenViewModel;
class UTexture2D;
class UUWEInventoryComponent;

UCLASS()
class SUBNAUTICA2_API USN2BioreactorViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsItemBeingConsumed;
    
    UPROPERTY(BlueprintReadOnly)
    FText ConsumingItemName;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> ConsumingItemThumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    float PowerOutput;
    
    UPROPERTY(BlueprintReadOnly)
    ESN2BioreactorPowerConsumptionState PowerConsumptionState;
    
    UPROPERTY(BlueprintReadOnly)
    USN2InventoryScreenViewModel* InventoryViewModel;
    
private:
    UPROPERTY()
    ASN2Bioreactor* bioreactor;
    
    UPROPERTY(Instanced)
    UUWEInventoryComponent* BioreactorInventory;
    
    UPROPERTY(Instanced)
    USN2BioreactorInteractionComponent* InteractionComponent;
    
public:
    USN2BioreactorViewModel();

    UFUNCTION(BlueprintCallable)
    void Teardown();
    
    UFUNCTION(BlueprintCallable)
    void SetupWithoutInteractor(ASN2Bioreactor* InBioreactor);
    
    UFUNCTION(BlueprintCallable)
    void Setup(ASN2Bioreactor* InBioreactor, UUWEInventoryComponent* InBioreactorInventory, USN2BioreactorInteractionComponent* InInteractionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetState(ESN2BioreactorPowerConsumptionState NewPowerConsumptionState);
    
protected:
    UFUNCTION()
    void OnPowerOutputChanged(float Power);
    
    UFUNCTION()
    void OnPowerConsumptionStateChanged(ESN2BioreactorPowerConsumptionState State);
    
    UFUNCTION()
    void OnItemChanged();
    
public:
    UFUNCTION(BlueprintPure)
    float GetConsumptionPercentage() const;
    
};

