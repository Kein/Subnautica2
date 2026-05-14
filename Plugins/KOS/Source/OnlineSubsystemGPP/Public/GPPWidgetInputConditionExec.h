#pragma once
#include "CoreMinimal.h"
#include "GPPWidgetInputConditionExec.generated.h"

class UGPPWidgetInputCondition;
class UGPPWidgetInputExecInfo;

USTRUCT(BlueprintType)
struct FGPPWidgetInputConditionExec {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGPPWidgetInputCondition* Condition;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UGPPWidgetInputExecInfo*> ExecInfoList;
    
    ONLINESUBSYSTEMGPP_API FGPPWidgetInputConditionExec();
};

