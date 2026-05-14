#pragma once
#include "CoreMinimal.h"
#include "MercunaAgentType.h"
#include "MercunaGroundAgentType.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaGroundAgentType : public FMercunaAgentType {
    GENERATED_BODY()
public:
    FMercunaGroundAgentType();
};

