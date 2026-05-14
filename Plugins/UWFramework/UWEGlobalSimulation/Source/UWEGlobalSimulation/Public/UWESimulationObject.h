#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UWESimulationObject.generated.h"

UCLASS(Abstract)
class UWEGLOBALSIMULATION_API UUWESimulationObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FGuid SimulationId;
    
public:
    UUWESimulationObject();

};

