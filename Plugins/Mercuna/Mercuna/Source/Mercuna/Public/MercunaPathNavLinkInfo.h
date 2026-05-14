#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaNavigationLinkDirection.h"
#include "MercunaNavLinkInfo.h"
#include "MercunaNavLinkPathSectionId.h"
#include "MercunaPathNavLinkInfo.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaPathNavLinkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector TraversalStart;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TraversalEnd;
    
    UPROPERTY(BlueprintReadOnly)
    EMercunaNavigationLinkDirection Direction;
    
    UPROPERTY(BlueprintReadOnly)
    FMercunaNavLinkPathSectionId PathSectionId;
    
    UPROPERTY(BlueprintReadOnly)
    FMercunaNavLinkInfo GridNavLink;
    
    FMercunaPathNavLinkInfo();
};

