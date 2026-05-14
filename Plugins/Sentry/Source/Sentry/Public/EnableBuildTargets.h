#pragma once
#include "CoreMinimal.h"
#include "EnableBuildTargets.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildTargets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableClient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableProgram;
    
    SENTRY_API FEnableBuildTargets();
};

