#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESimpleShape.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWESimpleShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfAngle;
    
    FUWESimpleShape();
};

