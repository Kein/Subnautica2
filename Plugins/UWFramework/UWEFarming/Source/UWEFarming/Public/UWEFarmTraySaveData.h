#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEFarmTraySaveData.generated.h"

USTRUCT(BlueprintType)
struct FUWEFarmTraySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FGuid> GrowingPlantGuids;
    
    UWEFARMING_API FUWEFarmTraySaveData();
};

