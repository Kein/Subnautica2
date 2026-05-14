#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEHarvest.h"
#include "UWEDynamicResourceHarvestObject.generated.h"

UCLASS(BlueprintType)
class UWEDYNAMICRESOURCES_API UUWEDynamicResourceHarvestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEHarvest Harvest;
    
    UUWEDynamicResourceHarvestObject();

};

