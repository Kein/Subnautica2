#pragma once
#include "CoreMinimal.h"
#include "ESonarSurveyOptionType.generated.h"

UENUM(BlueprintType)
enum class ESonarSurveyOptionType : uint8 {
    Agreement,
    Numeric,
    YesNo,
};

