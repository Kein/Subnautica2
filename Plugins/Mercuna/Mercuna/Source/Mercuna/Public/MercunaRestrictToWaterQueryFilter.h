#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaRestrictToWaterQueryFilter.generated.h"

USTRUCT()
struct FMercunaRestrictToWaterQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    MERCUNA_API FMercunaRestrictToWaterQueryFilter();
};

