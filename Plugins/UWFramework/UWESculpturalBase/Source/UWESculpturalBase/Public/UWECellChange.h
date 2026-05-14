#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEDecoratorMatch.h"
#include "UWERuntimeModuleMatch.h"
#include "UWECellChange.generated.h"

USTRUCT()
struct FUWECellChange {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FIntVector Coords;
    
    UPROPERTY(SaveGame)
    FTransform FinalPieceTransform;
    
    UPROPERTY(SaveGame)
    FUWERuntimeModuleMatch ModuleMatch;
    
    UPROPERTY(SaveGame)
    TArray<FUWEDecoratorMatch> DecoratorMatches;
    
    UPROPERTY(SaveGame)
    uint32 VariantIndex;
    
    UWESCULPTURALBASE_API FUWECellChange();
};

