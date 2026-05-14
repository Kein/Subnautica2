#pragma once
#include "CoreMinimal.h"
#include "UWERightAngleRotator.generated.h"

USTRUCT(BlueprintType)
struct UWEMATH_API FUWERightAngleRotator {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 ID;
    
    FUWERightAngleRotator();
};

