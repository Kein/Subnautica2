#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaPathPointType.h"
#include "MercunaPathNavLinkInfo.h"
#include "MercunaPathPointInfo.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaPathPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EMercunaPathPointType> Type;
    
    UPROPERTY(BlueprintReadOnly)
    FVector position;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Tangent;
    
    UPROPERTY(BlueprintReadOnly)
    FMercunaPathNavLinkInfo NavLinkInfo;
    
    FMercunaPathPointInfo();
};

