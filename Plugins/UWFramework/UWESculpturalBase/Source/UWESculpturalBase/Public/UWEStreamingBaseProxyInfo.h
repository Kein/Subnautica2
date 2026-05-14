#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEStreamingBaseProxyInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEStreamingBaseProxyInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid BaseNetworkGUID;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FIntVector ChunkCoords;
    
    UPROPERTY()
    FVector CellOriginOffset;
    
    UWESCULPTURALBASE_API FUWEStreamingBaseProxyInfo();
};

