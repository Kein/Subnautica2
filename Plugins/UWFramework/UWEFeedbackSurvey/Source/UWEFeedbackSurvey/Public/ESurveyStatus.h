#pragma once
#include "CoreMinimal.h"
#include "ESurveyStatus.generated.h"

UENUM(BlueprintType)
enum class ESurveyStatus : uint8 {
    Uninitialized,
    Loading,
    Success,
    Failed,
};

