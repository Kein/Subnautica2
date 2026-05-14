#pragma once
#include "CoreMinimal.h"
#include "UWEShaderCacheStatistics.generated.h"

USTRUCT(BlueprintType)
struct FUWEShaderCacheStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 NumPrecompilesRemaining;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumActivePrecacheRequests;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsPrecompiling;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsBatchingPaused;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldHoldForPrecompiling;
    
    UWEFRONTEND_API FUWEShaderCacheStatistics();
};

