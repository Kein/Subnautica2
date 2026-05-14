#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopSpatialCell.generated.h"

USTRUCT()
struct FUWEWorldPopSpatialCell {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsEmpty;
    
    UPROPERTY(EditAnywhere)
    bool IsPlayableSpace;
    
    UPROPERTY(EditAnywhere)
    bool IsLandscapeCell;
    
    UWEWORLDPOPULATION2_API FUWEWorldPopSpatialCell();
};

