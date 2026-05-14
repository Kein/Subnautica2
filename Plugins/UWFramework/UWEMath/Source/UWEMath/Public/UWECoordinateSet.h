#pragma once
#include "CoreMinimal.h"
#include "UWEIntBounds.h"
#include "UWECoordinateSet.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWECoordinateSet {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FUWEIntBounds> Sections;
    
    FUWECoordinateSet();
};

