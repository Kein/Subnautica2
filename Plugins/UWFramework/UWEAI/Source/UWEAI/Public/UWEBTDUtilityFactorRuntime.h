#pragma once
#include "CoreMinimal.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorRuntime.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorRuntime : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RuntimeTime;
    
    UUWEBTDUtilityFactorRuntime();

};

