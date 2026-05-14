#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEIntBounds.generated.h"

USTRUCT(BlueprintType)
struct FUWEIntBounds {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FIntVector min;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FIntVector max;
    
    UWEMATH_API FUWEIntBounds();
};

