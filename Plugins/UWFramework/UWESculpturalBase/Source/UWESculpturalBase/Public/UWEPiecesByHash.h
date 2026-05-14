#pragma once
#include "CoreMinimal.h"
#include "UWEPiecelist.h"
#include "UWEPiecesByHash.generated.h"

USTRUCT(BlueprintType)
struct FUWEPiecesByHash {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<uint32, FUWEPiecelist> PiecesByHash;
    
    UWESCULPTURALBASE_API FUWEPiecesByHash();
};

