#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EGPPWidgetInputExecType.h"
#include "GPPKeyGuideInputInfo.generated.h"

USTRUCT(BlueprintType)
struct FGPPKeyGuideInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPWidgetInputExecType ExecType;
    
    UPROPERTY(EditAnywhere)
    FKey InputKey;
    
    ONLINESUBSYSTEMGPP_API FGPPKeyGuideInputInfo();
};

