#pragma once
#include "CoreMinimal.h"
#include "EMercunaGridType.h"
#include "MercunaAgentType.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaAgentType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    EMercunaGridType GridType;
    
    FMercunaAgentType();
};
FORCEINLINE uint32 GetTypeHash(const FMercunaAgentType) { return 0; }

