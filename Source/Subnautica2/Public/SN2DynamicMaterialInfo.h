#pragma once
#include "CoreMinimal.h"
#include "SN2DynamicMaterialInfo.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FSN2DynamicMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ProgressBlendLayer;
    
    UPROPERTY()
    UMaterialInstanceDynamic* MaterialInstance;
    
    SUBNAUTICA2_API FSN2DynamicMaterialInfo();
};

