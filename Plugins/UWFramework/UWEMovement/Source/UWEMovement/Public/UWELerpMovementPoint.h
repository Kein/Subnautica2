#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWELerpMovementPoint.generated.h"

USTRUCT(BlueprintType)
struct FUWELerpMovementPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UWEMOVEMENT_API FUWELerpMovementPoint();
};

