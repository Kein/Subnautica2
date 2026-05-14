#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEActorSpawnInfo_Old.h"
#include "UWEBuilderItemsSave_Old.generated.h"

USTRUCT(BlueprintType)
struct FUWEBuilderItemsSave_Old {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWEActorSpawnInfo_Old> Items;
    
    UWESPAWNSYSTEMS_API FUWEBuilderItemsSave_Old();
};

