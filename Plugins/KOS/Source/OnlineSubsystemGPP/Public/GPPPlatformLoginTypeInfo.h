#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.h"
#include "Styling/SlateBrush.h"
#include "GPPPlatformLoginTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FGPPPlatformLoginTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGPPlatformLoginType LoginType;
    
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    ONLINESUBSYSTEMGPP_API FGPPPlatformLoginTypeInfo();
};

