#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2BaseScannerStationFilterViewModel.generated.h"

class USN2BaseScannerStationFilterDataAsset;
class USN2BaseScannerStationFilterViewModel;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2BaseScannerStationFilterViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsActiveFilter;
    
private:
    UPROPERTY()
    USN2BaseScannerStationFilterDataAsset* Filter;
    
public:
    USN2BaseScannerStationFilterViewModel();

    UFUNCTION(BlueprintPure)
    bool IsSameFilter(const USN2BaseScannerStationFilterViewModel* Other) const;
    
};

