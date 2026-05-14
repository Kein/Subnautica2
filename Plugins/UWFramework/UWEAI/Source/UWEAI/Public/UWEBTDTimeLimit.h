#pragma once
#include "CoreMinimal.h"
// FIXME
//stub
//#include "BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
// real
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "UWEBTDTimeLimit.generated.h"

UCLASS()
class UWEAI_API UUWEBTDTimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag ParamTag;
    
    UPROPERTY(EditAnywhere)
    float RandomDeviation;
    
public:
    UUWEBTDTimeLimit();

};

