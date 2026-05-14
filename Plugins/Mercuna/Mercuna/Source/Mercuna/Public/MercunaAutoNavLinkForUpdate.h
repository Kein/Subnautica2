#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkTraversalType.h"
#include "MercunaNavLinkIdentifier.h"
#include "MercunaUsageTypes.h"
#include "MercunaAutoNavLinkForUpdate.generated.h"

USTRUCT(BlueprintType)
struct FMercunaAutoNavLinkForUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMercunaNavLinkIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    EMercunaNavLinkTraversalType TraversalType;
    
    UPROPERTY(BlueprintReadWrite)
    FMercunaUsageTypes UsageTypes;
    
    UPROPERTY(BlueprintReadWrite)
    float Cost;
    
    MERCUNA_API FMercunaAutoNavLinkForUpdate();
};

