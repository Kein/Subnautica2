#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavEdge.generated.h"

USTRUCT(BlueprintType)
struct FMercunaNavEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector End;
    
    MERCUNA_API FMercunaNavEdge();
};

