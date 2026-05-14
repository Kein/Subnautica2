#pragma once
#include "CoreMinimal.h"
#include "EUWELerpMovementEaseType.h"
#include "UWELerpMovementExecutionSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWELerpMovementExecutionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float duration;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool Loops;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool SetWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUWELerpMovementEaseType EaseType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float EaseExp;
    
    UWEMOVEMENT_API FUWELerpMovementExecutionSettings();
};

