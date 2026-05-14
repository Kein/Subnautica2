#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EGPPWidgetInputExecType.h"
#include "GPPKeyGuideInfo.generated.h"

USTRUCT(BlueprintType)
struct FGPPKeyGuideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPWidgetInputExecType ExecType;
    
    UPROPERTY(EditAnywhere)
    FText GuideText;
    
    UPROPERTY(EditAnywhere)
    bool bUseFixedKey;
    
    UPROPERTY(EditAnywhere)
    FKey FixedKey;
    
    ONLINESUBSYSTEMGPP_API FGPPKeyGuideInfo();
};

