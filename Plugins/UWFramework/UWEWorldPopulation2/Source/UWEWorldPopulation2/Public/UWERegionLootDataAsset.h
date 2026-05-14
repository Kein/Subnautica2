#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWELootEntryList.h"
#include "UWERegionLootDataAsset.generated.h"

class AActor;

UCLASS()
class UWEWORLDPOPULATION2_API UUWERegionLootDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FUWELootEntryList> RegionLoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> DefaultResourceClass;
    
    UUWERegionLootDataAsset();

    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AActor> PickWeightedLootForRegion(FGameplayTag RegionTag);
    
    UFUNCTION(BlueprintCallable)
    FUWELootEntryList GetLootEntriesForRegion(FGameplayTag RegionTag);
    
};

