#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPersistentCreatureUpdateTime.generated.h"

USTRUCT(BlueprintType)
struct FUWEPersistentCreatureUpdateTime {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    double NextUpdateTime;
    
    UPROPERTY(SaveGame)
    FGuid ResourceId;
    
    UWEWORLDPOPULATION2_API FUWEPersistentCreatureUpdateTime();
};

