#pragma once
#include "CoreMinimal.h"
#include "BuildingRequirementDisplay.h"
#include "SN2BuilderConstructionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSN2BuilderConstructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CostDisplayString;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FBuildingRequirementDisplay> BuildingRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Progress;
    
    SUBNAUTICA2_API FSN2BuilderConstructionInfo();
};

