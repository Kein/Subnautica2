#pragma once
#include "CoreMinimal.h"
#include "UWEStructure.generated.h"

class UUWEPowerSystemComponent;

USTRUCT(BlueprintType)
struct FUWEStructure {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint32 StructureId;
    
    UPROPERTY(SaveGame)
    uint32 CellCount;
    
    UPROPERTY(Instanced, Transient)
    UUWEPowerSystemComponent* PowerSystem;
    
    UWESCULPTURALBASE_API FUWEStructure();
};

