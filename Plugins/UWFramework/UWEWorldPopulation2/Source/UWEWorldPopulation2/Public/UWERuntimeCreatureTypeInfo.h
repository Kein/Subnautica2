#pragma once
#include "CoreMinimal.h"
#include "UWERuntimeCreatureTypeInfo.generated.h"

class UUWEWorldPopCreatureRuntimePopulation;

USTRUCT(BlueprintType)
struct FUWERuntimeCreatureTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CurrentSpawned;
    
    UPROPERTY()
    UUWEWorldPopCreatureRuntimePopulation* Population;
    
    UWEWORLDPOPULATION2_API FUWERuntimeCreatureTypeInfo();
};

