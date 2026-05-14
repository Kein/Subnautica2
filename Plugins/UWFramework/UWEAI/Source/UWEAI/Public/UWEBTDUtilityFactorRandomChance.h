#pragma once
#include "CoreMinimal.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorRandomChance.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorRandomChance : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UUWEBTDUtilityFactorRandomChance();

};

