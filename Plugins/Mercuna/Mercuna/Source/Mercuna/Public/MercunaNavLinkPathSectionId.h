#pragma once
#include "CoreMinimal.h"
#include "MercunaNavLinkPathSectionId.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaNavLinkPathSectionId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ID;
    
    FMercunaNavLinkPathSectionId();
};

