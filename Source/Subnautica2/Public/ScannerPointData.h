#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScannerPointData.generated.h"

USTRUCT(BlueprintType)
struct FScannerPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite)
    float Lifetime;
    
    SUBNAUTICA2_API FScannerPointData();
};

