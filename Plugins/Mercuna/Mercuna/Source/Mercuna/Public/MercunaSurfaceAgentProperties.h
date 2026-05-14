#pragma once
#include "CoreMinimal.h"
#include "Mercuna2DAgentProperties.h"
#include "MercunaSurfaceAgentProperties.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaSurfaceAgentProperties : public FMercuna2DAgentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float PawnRadius;
    
    FMercunaSurfaceAgentProperties();
};

