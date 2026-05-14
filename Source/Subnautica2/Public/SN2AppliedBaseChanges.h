#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWECoordinateSet.h"
#include "SN2AppliedBaseChanges.generated.h"

USTRUCT(BlueprintType)
struct FSN2AppliedBaseChanges {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGuid BaseGUID;
    
    UPROPERTY(SaveGame)
    FUWECoordinateSet EditedCells;
    
    UPROPERTY(SaveGame)
    FUWECoordinateSet ChangedCells;
    
    UPROPERTY(SaveGame)
    uint32 RequiredVersion;
    
    SUBNAUTICA2_API FSN2AppliedBaseChanges();
};

