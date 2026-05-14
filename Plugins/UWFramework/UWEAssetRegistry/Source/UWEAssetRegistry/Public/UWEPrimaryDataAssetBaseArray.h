#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBaseArray.generated.h"

class UUWEPrimaryDataAssetBase;

USTRUCT(BlueprintType)
struct FUWEPrimaryDataAssetBaseArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UUWEPrimaryDataAssetBase*> Assets;
    
    UWEASSETREGISTRY_API FUWEPrimaryDataAssetBaseArray();
};

