#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaAllRequiredUsageTypesQueryFilter.generated.h"

USTRUCT()
struct FMercunaAllRequiredUsageTypesQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    MERCUNA_API FMercunaAllRequiredUsageTypesQueryFilter();
};

