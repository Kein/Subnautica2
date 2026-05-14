#pragma once
#include "CoreMinimal.h"
#include "EMercunaGridType.h"
#include "MercunaAgentType.h"
#include "MercunaSupportedAgentTypes.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaSupportedAgentTypes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<FMercunaAgentType> AgentTypes;
    
    UPROPERTY(EditAnywhere)
    EMercunaGridType GridType;
    
private:
    UPROPERTY()
    TMap<FMercunaAgentType, int32> Types;
    
public:
    FMercunaSupportedAgentTypes();
};

