#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESphereTransformed.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWESphereTransformed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    FUWESphereTransformed();
};

