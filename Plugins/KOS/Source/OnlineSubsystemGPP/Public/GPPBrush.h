#pragma once
#include "CoreMinimal.h"
#include "EGPPBtnStateFlags.h"
#include "GPPWidgetLayoutStyleBrush.h"
#include "GPPBrush.generated.h"

USTRUCT(BlueprintType)
struct FGPPBrush {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPBtnStateFlags StateFlags;
    
    UPROPERTY(EditAnywhere)
    FGPPWidgetLayoutStyleBrush LayoutStyleBrush;
    
    ONLINESUBSYSTEMGPP_API FGPPBrush();
};

