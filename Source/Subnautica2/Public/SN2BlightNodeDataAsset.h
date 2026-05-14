#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "SN2BlightNodeDataAsset.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2BlightNodeDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    USN2BlightNodeDataAsset();

};

