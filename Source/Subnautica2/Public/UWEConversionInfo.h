#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEConversionInfo.generated.h"

class ASN2WorldGameMode;

USTRUCT()
struct FUWEConversionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid GameModeSaveId;
    
    UPROPERTY()
    ASN2WorldGameMode* GameMode;
    
    SUBNAUTICA2_API FUWEConversionInfo();
};

