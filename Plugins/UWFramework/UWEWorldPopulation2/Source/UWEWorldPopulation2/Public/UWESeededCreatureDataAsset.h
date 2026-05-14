#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWESeededCreatureInfo.h"
#include "UWESeededCreatureDataAsset.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWESeededCreatureDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FUWESeededCreatureInfo> SeededData;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FString MapName;
    
    UUWESeededCreatureDataAsset();

};

