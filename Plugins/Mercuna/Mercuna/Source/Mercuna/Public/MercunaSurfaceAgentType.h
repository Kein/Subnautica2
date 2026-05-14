#pragma once
#include "CoreMinimal.h"
#include "MercunaAgentType.h"
#include "MercunaSurfaceAgentType.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaSurfaceAgentType : public FMercunaAgentType {
    GENERATED_BODY()
public:
    FMercunaSurfaceAgentType();
};

