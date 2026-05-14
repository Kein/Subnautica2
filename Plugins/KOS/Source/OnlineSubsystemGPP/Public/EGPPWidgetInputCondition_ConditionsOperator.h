#pragma once
#include "CoreMinimal.h"
#include "EGPPWidgetInputCondition_ConditionsOperator.generated.h"

UENUM(BlueprintType)
enum class EGPPWidgetInputCondition_ConditionsOperator : uint8 {
    Operator_OR,
    Operator_AND,
};

