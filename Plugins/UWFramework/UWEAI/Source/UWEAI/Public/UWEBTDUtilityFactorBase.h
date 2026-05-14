#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UWEBTDUtilityFactorBase.generated.h"

UCLASS(Abstract)
class UWEAI_API UUWEBTDUtilityFactorBase : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Inverted;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UUWEBTDUtilityFactorBase();

};

