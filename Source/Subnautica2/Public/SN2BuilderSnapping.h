#pragma once
#include "CoreMinimal.h"
#include "EBuilderSnapping.h"
#include "SN2BuilderSnapping.generated.h"

USTRUCT(BlueprintType)
struct FSN2BuilderSnapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EBuilderSnapping Mode;
    
    UPROPERTY(BlueprintReadWrite)
    float Scale;
    
    SUBNAUTICA2_API FSN2BuilderSnapping();
};

