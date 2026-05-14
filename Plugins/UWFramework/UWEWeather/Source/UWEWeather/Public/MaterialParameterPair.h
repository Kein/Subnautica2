#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaterialParameterPair.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParameterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FLinearColor Value;
    
    UWEWEATHER_API FMaterialParameterPair();
};

