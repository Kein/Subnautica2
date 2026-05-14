#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEVideoTourSample.generated.h"

USTRUCT(BlueprintType)
struct FUWEVideoTourSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Ang;
    
    UWEAUTOMATIONTESTING_API FUWEVideoTourSample();
};

