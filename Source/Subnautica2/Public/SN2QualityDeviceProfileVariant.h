#pragma once
#include "CoreMinimal.h"
#include "SN2QualityDeviceProfileVariant.generated.h"

USTRUCT(BlueprintType)
struct FSN2QualityDeviceProfileVariant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FString DeviceProfileSuffix;
    
    UPROPERTY(EditAnywhere)
    int32 MinRefreshRate;
    
    SUBNAUTICA2_API FSN2QualityDeviceProfileVariant();
};

