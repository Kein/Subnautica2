#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2BaseScannerStationViewModel.generated.h"

class ASN2BaseScannerStation;
class USN2BaseScannerInteractionComponent;
class USN2BaseScannerStationFilterDataAsset;
class USN2BaseScannerStationFilterViewModel;

UCLASS()
class SUBNAUTICA2_API USN2BaseScannerStationViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ScannerRadiusMeters;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasPower;
    
    UPROPERTY(BlueprintReadOnly)
    USN2BaseScannerStationFilterViewModel* ActiveFilter;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2BaseScannerStationFilterViewModel*> AllowedFilters;
    
private:
    UPROPERTY(Instanced)
    USN2BaseScannerInteractionComponent* InteractionComponent;
    
    UPROPERTY()
    ASN2BaseScannerStation* ScannerStation;
    
public:
    USN2BaseScannerStationViewModel();

    UFUNCTION(BlueprintCallable)
    void Teardown();
    
    UFUNCTION(BlueprintCallable)
    void Setup(ASN2BaseScannerStation* NewScannerStation, USN2BaseScannerInteractionComponent* NewInteractionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveFilter(USN2BaseScannerStationFilterViewModel* Filter);
    
protected:
    UFUNCTION()
    void OnPowerStateChanged(bool bIsPowered);
    
    UFUNCTION()
    void OnAllowedFiltersChanged(const TArray<USN2BaseScannerStationFilterDataAsset*>& NewAllowedFilters);
    
    UFUNCTION()
    void OnActiveFilterChanged(USN2BaseScannerStationFilterDataAsset* NewActiveFilter);
    
};

