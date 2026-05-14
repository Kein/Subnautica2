#pragma once
#include "CoreMinimal.h"
#include "UWEPerfTestConfig.generated.h"

USTRUCT(BlueprintType)
struct FUWEPerfTestConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStatsUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WindowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GraphicsSettings;
    
    UWEAUTOMATIONTESTING_API FUWEPerfTestConfig();
};

