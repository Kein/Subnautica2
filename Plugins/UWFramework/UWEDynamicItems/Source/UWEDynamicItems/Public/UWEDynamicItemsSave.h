#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDynamicItemInfo.h"
#include "UWEDynamicItemsSave.generated.h"

USTRUCT(BlueprintType)
struct UWEDYNAMICITEMS_API FUWEDynamicItemsSave {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWEDynamicItemInfo> DynamicItems;
    
    FUWEDynamicItemsSave();
};

