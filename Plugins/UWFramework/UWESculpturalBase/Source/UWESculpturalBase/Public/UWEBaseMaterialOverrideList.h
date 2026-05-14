#pragma once
#include "CoreMinimal.h"
#include "UWEBaseMaterialOverride.h"
#include "UWEBaseMaterialOverrideList.generated.h"

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWEBaseMaterialOverrideList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FUWEBaseMaterialOverride> Overrides;
    
public:
    FUWEBaseMaterialOverrideList();
};

