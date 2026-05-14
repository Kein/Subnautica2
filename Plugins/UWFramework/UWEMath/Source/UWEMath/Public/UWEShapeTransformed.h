#pragma once
#include "CoreMinimal.h"
#include "EUWETransformedShapeType.h"
#include "UWEBoxTransformed.h"
#include "UWESphereTransformed.h"
#include "UWEShapeTransformed.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWEShapeTransformed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWETransformedShapeType Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESphereTransformed Sphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEBoxTransformed Box;
    
    FUWEShapeTransformed();
};

