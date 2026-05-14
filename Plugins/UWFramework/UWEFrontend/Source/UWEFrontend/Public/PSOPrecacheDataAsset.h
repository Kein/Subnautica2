#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PSOPrecacheDataAsset.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPSOPrecacheDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> AssetsToLoad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UObject>> BlueprintsToLoad;
    
    UPSOPrecacheDataAsset();

};

