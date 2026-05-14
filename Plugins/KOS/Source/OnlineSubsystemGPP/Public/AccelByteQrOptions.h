#pragma once
#include "CoreMinimal.h"
#include "AccelByteQrOptions.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAccelByteQrOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnlargeLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LogoRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TextureSize;
    
    ONLINESUBSYSTEMGPP_API FAccelByteQrOptions();
};

