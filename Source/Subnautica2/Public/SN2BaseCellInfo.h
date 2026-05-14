#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SN2BaseCellInfo.generated.h"

USTRUCT(BlueprintType)
struct FSN2BaseCellInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bCellExists;
    
    UPROPERTY(BlueprintReadOnly)
    FIntVector Coords;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Normal;
    
    SUBNAUTICA2_API FSN2BaseCellInfo();
};

