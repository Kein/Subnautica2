#pragma once
#include "CoreMinimal.h"
#include "DefaultParam.generated.h"

USTRUCT()
struct FDefaultParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Value;
    
    UPROPERTY()
    int32 MinNumParams;
    
    SUBNAUTICA2_API FDefaultParam();
};

