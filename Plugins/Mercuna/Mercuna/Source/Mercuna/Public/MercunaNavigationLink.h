#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaNavigationLinkDirection.h"
#include "MercunaNavigationLink.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaNavigationLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaNavigationLinkDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDistanceAsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftToRightCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightToLeftCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftAutoCompletionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightAutoCompletionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightEntryAngle;
    
    FMercunaNavigationLink();
};

