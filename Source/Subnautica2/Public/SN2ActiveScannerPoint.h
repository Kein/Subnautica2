#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2ActiveScannerPoint.generated.h"

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FSN2ActiveScannerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Count;
    
    FSN2ActiveScannerPoint();
};

