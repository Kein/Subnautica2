#pragma once
#include "CoreMinimal.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorConstant.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorConstant : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Utility;
    
    UUWEBTDUtilityFactorConstant();

};

