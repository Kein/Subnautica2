#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataAsset.h"
#include "UWESeedData.generated.h"

class AActor;
class UUWESeedData;

UCLASS(EditInlineNew)
class UWEFARMING_API UUWESeedData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> PlantClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrowTime;
    
    UUWESeedData();

    UFUNCTION(BlueprintPure)
    static UUWESeedData* GetSeedDataForActor(const AActor* Actor);
    
};

