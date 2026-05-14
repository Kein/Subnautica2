#pragma once
#include "CoreMinimal.h"
#include "EGPPOSType.h"
#include "Styling/SlateBrush.h"
#include "GPPKeyImages.generated.h"

USTRUCT(BlueprintType)
struct FGPPKeyImages {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush DefaultImage;
    
    UPROPERTY(EditAnywhere)
    TMap<EGPPOSType, FSlateBrush> ImageList;
    
    ONLINESUBSYSTEMGPP_API FGPPKeyImages();
};

