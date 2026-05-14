#pragma once
#include "CoreMinimal.h"
#include "LightDataInstance.generated.h"

class ULightComponentBase;

USTRUCT(BlueprintType)
struct FLightDataInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<ULightComponentBase> LightComponent;
    
    UWELIGHTING_API FLightDataInstance();
};

