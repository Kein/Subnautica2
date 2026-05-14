#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavMeshEdge.generated.h"

USTRUCT(BlueprintType)
struct FMercunaNavMeshEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EdgeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EdgeEnd;
    
    MERCUNA_API FMercunaNavMeshEdge();
};

