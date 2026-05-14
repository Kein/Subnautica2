#pragma once
#include "CoreMinimal.h"
#include "KeyVal.generated.h"

USTRUCT(BlueprintType)
struct FKeyVal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Key;
    
    UPROPERTY(BlueprintReadWrite)
    FString Val;
    
    UWEANALYTICS_API FKeyVal();
};

