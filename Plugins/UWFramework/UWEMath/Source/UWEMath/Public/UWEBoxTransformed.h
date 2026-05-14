#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEBoxTransformed.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWEBoxTransformed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    FUWEBoxTransformed();
};

