#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "EGPPBtnStateFlags.h"
#include "GPPColor.generated.h"

USTRUCT(BlueprintType)
struct FGPPColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPBtnStateFlags StateFlags;
    
    UPROPERTY(EditAnywhere)
    FSlateColor Color;
    
    ONLINESUBSYSTEMGPP_API FGPPColor();
};

