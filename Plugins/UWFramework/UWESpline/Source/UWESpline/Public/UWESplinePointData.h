#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESplinePointData.generated.h"

USTRUCT(BlueprintType)
struct FUWESplinePointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    float FadeExtent;
    
    UWESPLINE_API FUWESplinePointData();
};

