#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWESeededActorInstance.h"
#include "UWESeededResourceInfo.h"
#include "UWESeededResourceDataAsset.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWESeededResourceDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FUWESeededResourceInfo> SeededData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FUWESeededActorInstance> SeededInstances;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FString MapName;
    
    UUWESeededResourceDataAsset();

};

