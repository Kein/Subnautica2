#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LockedCellGroup.generated.h"

USTRUCT(BlueprintType)
struct FLockedCellGroup {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSet<FIntVector> LockedCells;
    
    UPROPERTY(SaveGame)
    uint8 Flags;
    
    UPROPERTY(SaveGame)
    FGuid LockOwner;
    
    UPROPERTY(SaveGame)
    int32 AssociatedInventoryID;
    
    UWESCULPTURALBASE_API FLockedCellGroup();
};

