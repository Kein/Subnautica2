#pragma once
#include "CoreMinimal.h"
#include "UWESupportOverride.h"
#include "UWESupportOverrides.generated.h"

USTRUCT(BlueprintType)
struct FUWESupportOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FUWESupportOverride> Overrides;
    
    UWESCULPTURALBASE_API FUWESupportOverrides();
};

