#pragma once
#include "CoreMinimal.h"
#include "EnableBuildConfigurations.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildConfigurations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableDebugGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableDevelopment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableTest;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableShipping;
    
    SENTRY_API FEnableBuildConfigurations();
};

