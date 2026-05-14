#pragma once
#include "CoreMinimal.h"
#include "UWESelectionSize.generated.h"

USTRUCT(BlueprintType)
struct FUWESelectionSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EditDepth;
    
    UWESCULPTURALBASE_API FUWESelectionSize();
};

