#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUWEPublishedStatus.h"
#include "UWEPrimaryDataAssetBase.generated.h"

UCLASS(BlueprintType)
class UWEASSETREGISTRY_API UUWEPrimaryDataAssetBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditDefaultsOnly)
    EUWEPublishedStatus PublishedStatus;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditDefaultsOnly)
    FString DeveloperNote;
    
    UUWEPrimaryDataAssetBase();

    UFUNCTION(BlueprintPure)
    bool IsPublished() const;
    
};

