#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEMapPoint.generated.h"

USTRUCT()
struct FUWEMapPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    SUBNAUTICA2_API FUWEMapPoint();
};

