#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEWorldPopCreatureRuntimePopulation.generated.h"

UCLASS()
class UUWEWorldPopCreatureRuntimePopulation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TotalPopulationCount;
    
    UUWEWorldPopCreatureRuntimePopulation();

};

