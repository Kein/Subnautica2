#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlacementArrowOffsets.generated.h"

USTRUCT(BlueprintType)
struct FUWEPlacementArrowOffsets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ExteriorOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector InteriorOffset;
    
    UWESCULPTURALBASE_API FUWEPlacementArrowOffsets();
};

