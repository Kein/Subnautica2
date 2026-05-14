#pragma once
#include "CoreMinimal.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorFeatureFlag.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorFeatureFlag : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FeatureFlag;
    
    UUWEBTDUtilityFactorFeatureFlag();

};

