#pragma once
#include "CoreMinimal.h"
#include "AutomaticBreadcrumbsForLogs.generated.h"

USTRUCT(BlueprintType)
struct FAutomaticBreadcrumbsForLogs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnFatalLog;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnErrorLog;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnWarningLog;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnInfoLog;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnDebugLog;
    
    SENTRY_API FAutomaticBreadcrumbsForLogs();
};

