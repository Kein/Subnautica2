#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEWorldRegionDataAsset.generated.h"

class UUWEWorldPopRegionConfigDA;

UCLASS()
class UWEWORLDPOPULATION2_API UUWEWorldRegionDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEWorldPopRegionConfigDA> Config;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag RegionTag;
    
    UUWEWorldRegionDataAsset();

};

