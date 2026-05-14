#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "EGPPUIMode.h"
#include "PaddingByUIMode.generated.h"

USTRUCT(BlueprintType)
struct FPaddingByUIMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPUIMode Mode;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    ONLINESUBSYSTEMGPP_API FPaddingByUIMode();
};

