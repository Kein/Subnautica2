#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EGPPWidgetLayoutStyle.h"
#include "GPPWidgetLayoutStyleBrush.generated.h"

USTRUCT(BlueprintType)
struct FGPPWidgetLayoutStyleBrush {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPWidgetLayoutStyle WidgetLayoutStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    ONLINESUBSYSTEMGPP_API FGPPWidgetLayoutStyleBrush();
};

