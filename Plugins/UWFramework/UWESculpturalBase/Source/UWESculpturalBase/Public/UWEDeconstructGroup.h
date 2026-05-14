#pragma once
#include "CoreMinimal.h"
#include "UWECoordinateSet.h"
#include "UWEDeconstructGroup.generated.h"

USTRUCT(BlueprintType)
struct FUWEDeconstructGroup {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWECoordinateSet Cells;
    
    UPROPERTY(SaveGame)
    uint32 ID;
    
    UWESCULPTURALBASE_API FUWEDeconstructGroup();
};

