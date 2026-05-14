#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "EGPPBtnStateFlags.h"
#include "GPPFont.generated.h"

USTRUCT(BlueprintType)
struct FGPPFont {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPBtnStateFlags StateFlags;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo Font;
    
    ONLINESUBSYSTEMGPP_API FGPPFont();
};

