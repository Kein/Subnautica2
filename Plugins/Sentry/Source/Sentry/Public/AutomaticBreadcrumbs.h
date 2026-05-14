#pragma once
#include "CoreMinimal.h"
#include "AutomaticBreadcrumbs.generated.h"

USTRUCT(BlueprintType)
struct FAutomaticBreadcrumbs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnMapLoadingStarted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnMapLoaded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnGameStateClassChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnGameSessionIDChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bOnUserActivityStringChanged;
    
    SENTRY_API FAutomaticBreadcrumbs();
};

