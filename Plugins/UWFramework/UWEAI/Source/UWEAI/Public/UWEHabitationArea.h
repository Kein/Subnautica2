#pragma once
#include "CoreMinimal.h"
#include "UWEShapeTransformed.h"
#include "UWEHabitationArea.generated.h"

USTRUCT(BlueprintType)
struct FUWEHabitationArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FUWEShapeTransformed> IncludeInsideVolumes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FUWEShapeTransformed> ExcludeOutsideVolumes;
    
    UWEAI_API FUWEHabitationArea();
};

