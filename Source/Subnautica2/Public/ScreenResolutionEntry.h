#pragma once
#include "CoreMinimal.h"
#include "ScreenResolutionEntry.generated.h"

USTRUCT(BlueprintType)
struct FScreenResolutionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RefreshRate;
    
    UPROPERTY(BlueprintReadOnly)
    FText DisplayText;
    
    SUBNAUTICA2_API FScreenResolutionEntry();
};

