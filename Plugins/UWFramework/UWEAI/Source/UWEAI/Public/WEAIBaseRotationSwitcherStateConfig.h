#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "WEAIBaseRotationSwitcherStateConfig.generated.h"

USTRUCT(BlueprintType)
struct FWEAIBaseRotationSwitcherStateConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SpeedCurve;
    
    UWEAI_API FWEAIBaseRotationSwitcherStateConfig();
};

