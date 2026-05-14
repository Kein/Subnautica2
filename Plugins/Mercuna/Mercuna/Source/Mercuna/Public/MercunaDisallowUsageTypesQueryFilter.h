#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaUsageTypes.h"
#include "MercunaDisallowUsageTypesQueryFilter.generated.h"

USTRUCT()
struct FMercunaDisallowUsageTypesQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMercunaUsageTypes DisallowedUsageTypes;
    
    MERCUNA_API FMercunaDisallowUsageTypesQueryFilter();
};

