#pragma once
#include "CoreMinimal.h"
#include "MercunaUsageTypes.h"
#include "MercunaUsageSpec.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaUsageSpec {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMercunaUsageTypes RequiredUsageTypes;
    
    UPROPERTY(EditAnywhere)
    FMercunaUsageTypes AllowedUsageTypes;
    
    FMercunaUsageSpec();
};

