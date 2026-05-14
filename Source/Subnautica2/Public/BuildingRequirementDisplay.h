#pragma once
#include "CoreMinimal.h"
#include "BuildingRequirementDisplay.generated.h"

USTRUCT(BlueprintType)
struct FBuildingRequirementDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText RequiredResourceName;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentItemCount;
    
    UPROPERTY(BlueprintReadOnly)
    float CollectiveItemCount;
    
    UPROPERTY(BlueprintReadOnly)
    float RequiredItemCount;
    
    SUBNAUTICA2_API FBuildingRequirementDisplay();
};

